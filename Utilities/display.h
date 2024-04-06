#include<iostream>
#define BOLD "\033[1m"
#define RESET "\033[0m"
using namespace std;
#ifndef DISPLAY_H
#define DISPLAY_H
#include"..\Classes\company.h"
#include"..\Classes\internship.h"
#include"..\Classes\schedule.h"
#include"..\Classes\file_reader.h"
#include"..\Classes\student.h"
#include"..\Classes\JobOffers.h"
#include"..\Classes\placement.h"
#include <bits/stdc++.h>
void display_allstudents(map<long, Student*> &Student)
{
    cout << "\t\t\t\t\t\t  || LIST OF STUDENTS ||\n"<< endl;
     cout.width(3);
     cout << "\t\t\t| Serial No."<< "|";
     cout.width(12);
     cout << "Name"<< "   \t|";
     cout.width(10);
     cout << "ID"<< "\t|";
     cout.width(8);
     cout << "Branch"<<"\t|";
     cout.width(5);
     cout << "CGPA"<<"\t|";
     cout.width(6);
     cout << "Year"<<"\t|" ;
     cout << endl;
     cout<<"\t\t\t\t-------------------------------------------------"<<endl;
    // /int index = 0;
    for( auto i = Student.begin(); i != Student.end(); i++ )
    { cout << "Hi";
             cout<<"\t\t\t\t";
             cout.width(3);
            // cout << "|   "<<index++ << " \t    |";
             cout.width(10);
             cout << i->second->id << "\t|";
              cout.width(15);
             cout << i->second->getName() << "\t|";
             cout << endl;
             cout.width(8);
             cout << i->second->getProgram() << "\t| ";
             cout << endl;
             cout.width(20);
             if (i->second->cgpa < 3.0)
             {
                 cout << "Not elligible for placement \t|" << endl;
             }
             else
             {
                 cout << i->second->cgpa<< " ";
                 cout << "[Eligible for placement] \t|"<<endl;
             }
             cout.width(6);
             cout << i->second->getYearOfPlacement() << " \t| ";
             cout << endl;
            
         
     
}
cout << "\n"
          << endl;
     cout<<"\t\t\t\t-------------------------------------------------"<<endl;
     cout<<"\n\n";
}

void display_particularstudent(map<long,Student*>  &Students,int ID_NO)
{
    Student* s = Students[ID_NO];
    cout << s;
    
    cout<<"\t\t\t\t-------------------------------------------------"<<endl;
}


void company_based_details(map<long,JobOffer*>&j){
    cout << "Enter the company name:" ;
    string company;
    cin >> company;
    cout << "The students placed in " << company << "are:" << endl;
    for(auto i : j){
        if(i.second->getCompanyName() == company){  
            cout << i.first << "\t" << i.second->getname() << "\t" << i.second->getPlacedStatus() << endl ;
        }
    }
}

void  batchwise_placement_details(map<long,JobOffer*> j){
    cout << "Which  Batch? (Mtech ICT/Btech ICT)" << endl;
    string  b;
    getline(cin,b);

    cout << "The students of  "<< b << " are as follows: " << endl;
    for(auto i : j){
        if (i.second->getbatch() == b){
            cout << i.first << "\t" << i.second->getname() << "\t" << i.second->getPlacedStatus() << endl;
        }
    }
}void display_choice1(int choice1,map<long,Student*>&students,map<long,vector<Internship>>& internships,map<long,Schedule*>& schedule,vector<Internship>&data)
{
    if(choice1 == 1)
    {
        cout<<"THIS IS THE TABLE CONTAINING DATA OF ALL STUDENTS:"<<endl;
        display_allstudents(students);
    }
    else if(choice1 == 2)
    {
        cout<<"THIS IS THE DATA OF THE PARTICULAR STUDENT:"<<endl;
        cout<<"ENTER 1 - MY DETAILS"<<endl;
        cout<<"ENTER 2 - INTERNSHIP DETAILS"<<endl;
        cout<<"ENTER 3 - SCHEDULE DETAILS"<<endl;
        int ch;
        cout << "Enter your choice: ";
        cin >> ch;
        int ID_NUMBER;
        cin >> ID_NUMBER;
        if(ch == 1)
        {
            cout<< "YOU OPTED TO VIEW DETAILS OF A PARTICULAR STUDENT."<< endl;
            
            void display_particularstudent(map<long,Student*> &Students,int ID_NUMBER);
        }
        else if(ch == 2)
        {
            cout<< "YOU OPTED TO VIEW INTERNSHIP DETAILS:"<<endl;
           void display_internships();
        }
    }
    else if(choice1 == 3)
    {
        cout<<"YOU OPTED TO VIEW SCHEDULE DETAILS:"<<endl;
    }
}
void display_allcompanydetails(vector<company> &company)
{
    cout << "\t\t\t\t\t\t  LIST OF COMPANY\n";
    cout.width(5);
    cout<<"\t\t| SERIAL.NO"<<"|";
    cout.width(12);
    cout<<" COMPANY NAME"<<"|";
    cout.width(18);
    cout<<"| ADDRESS OF COMPANY"<<"|";
    cout.width(7);
    cout<<"| PACKAGE"<<"|";
    cout.width(10);
    cout<<"| HIRED_STUDENTS"<<"|";
    cout.width(7);
    cout<<"| CRITERIA"<<"|";
    cout.width(11);
    cout<<"| NO. OF ALUMNI"<<"|";
    cout.width(15);
    cout<<"| PRESENT_AT_CAMPUS"<<"|";
    cout<<endl;
    cout<<"\\\\\\-----------------------------------------//////";
    int index = 1;
        for(auto company : company)
        {
            cout<<"\t\t";
            cout<<"|  "<<index++<<" | ";
            cout.width(12);
            cout<< company.cmpname<<"\t|";
            cout.width(20);
            cout<< company.cmpaddress<<"\t|";
            cout.width(6);
            cout<< company.package<<"\t|";
            cout.width(10);
            cout<< company.hiredstudents<<"\t|";
            cout.width(7);
            cout<< company.criteria<<"\t|";
            cout.width(11);
            cout<< company.no_of_alumni<<"\t|";
            cout.width(10);
            cout<< company.at_college<<"|\n";
        }
}
void display_choice2(int choice2,map<long,JobOffer*> j)
{
    switch(choice2)
    {
        case 1:
            cout<<"YOU OPTED TO VIEW THE PLACEMENT DETAILS THROUGH COMPANY NAMES."<<endl;
            company_based_details(j);
            break;
        
        case 2:
            cout<<"YOU OPTED TO VIEW PLACEMENT DETAILS BATCH WISE."<<endl;
             batchwise_placement_details(j);

            break;
        
        case 3:
            cout<<"YOU OPTED TO VIEW THE PLACEMENT DETAILS BASED ON STATISTICS:"<<endl;
            max_package(j) ;
            mean_package(j);
            break;
        
        default:
            cout<<"LOCATION WISE:"<<endl;
    }
}

void display_choice(int choice,map<long,Student*> &students,vector<company> &company,map<long,vector<Internship>>& internships,map<long,Schedule*>& schedule,map<long,JobOffer*>& jf,vector<Internship>&data)
{
    switch (choice)
    {
    case 1:
        cout<<"YOU OPTED TO DISPLAY ONGOING PROCESS OF PLACEMENT:"<<endl;
        cout<<"ENTER 1 - IF YOU WANT TO VIEW DETAILS OF ALL STUDENTS."<<endl;
        cout<<"ENTER 2 - IF YOU WANT TO VIEW DETAIL OF A PARTICULAR STUDENT."<<endl;
        int choice1;
        cin >> choice1;
        display_choice1(choice1,students,internships,schedule,data);
        break;
    case 2:
        cout<<"YOU OPTED TO VIEW THE PLACEMENT DETAILS:"<<endl;
        cout << "ENTER 1 = TO DISPLAY PLACEMENT DETAILS BASED ON COMPANY NAME:"<<endl;
        cout << "ENTER 4 = TO DISPLAY PLACEMENT DETAILS LOCATION WISE:"<<endl;
        cout << "ENTER 3 = TO DISPLAY PLACEMENT STATISTICS:"<<endl;
        cout << "ENTER 2 = TO DISPLAY PLACEMENT DETAILS BATCHWISE:"<<endl;
        int choice2;
        cin >> choice2;
        display_choice2(choice2,jf);
        break;
    
    case 3:
        cout<<"YOU OPTED TO VIEW THE COMPANY DETAILS:";
        display_allcompanydetails(company);
        break;

    case 4:
        cout<<"IF YOU WANT TO GO TO PREVIOUS MENU."<<endl;
        
    }

}




void display(map<long,Student*> &students,vector<company> &company,map<long,vector<Internship>>& internships,map<long,Schedule*>& schedule,map<long,JobOffer*>& jf,vector<Internship>&data)
{
    
    cout<<"Enter 1 to display ongoing process of placement"<<endl;
    cout<<"Enter 2 to display the past placement program details"<<endl;
    cout<<BOLD<<"ENTER YOUR CHOICE:"<<RESET<<endl;
    int c; cin >> c;
    display_choice(c,students,company,internships,schedule,jf,data);
}

#endif
