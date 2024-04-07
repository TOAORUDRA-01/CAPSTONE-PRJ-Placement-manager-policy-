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
#include<string.h>
void display_allstudents(map<string, Student*> &Student)
{
    cout << "\t\t\t\t\t\t  || LIST OF STUDENTS ||\n"<< endl;
    //  cout.width(10);
    //  cout << "\t\t\t| Serial No."<< "|";
    cout << "\t\t\t|";
    cout.width(10);
     cout << "ID"<< "\t|";
     cout.width(12);
     cout << "Name"<< "   \t|";
     
     cout.width(8);
     cout << "Branch"<<"\t|";
     cout.width(15);
     cout << "CGPA"<<"\t|";
     cout.width(6);
     cout << "Year"<<"\t|" ;
     cout << endl;
     cout<<"\t\t\t-----------------------------------------------------------------------------------------------------------------"<<endl;
    // /int index = 0;
    for( auto i = Student.begin(); i != Student.end(); i++ )
    { 
             cout<<"\t\t\t";
            // cout << "|   "<<index++ << " \t    |";
             cout.width(10);
             cout << i->first << "\t|";
              cout.width(12);
             cout << i->second->getName() << "\t|";
             cout.width(8);
             cout << i->second->getProgram() << "\t| ";
             cout.width(15);
             if (i->second->cgpa < 3.0)
             {
                 cout << i->second->cgpa << " Not elligible for placement \t|" ;
             }
             else
             {
                 cout << i->second->cgpa<< " ";
                 cout <<"[Eligible for placement] \t|";
             }
             cout.width(6);
             cout << i->second->getYearOfPlacement() << " \t| ";
             cout << endl;
            
         
     
}
cout << "\n"
          << endl;
     cout<<"\t\t\t-----------------------------------------------------------------------------------------------------------------"<<endl;
     cout<<"\n\n";
}


void company_based_details(map<string,JobOffer*>&j){
     string company;
    cout << "Enter the company name:" ;
    cin.ignore();
    getline(cin, company);
    cout << "The students placed in " << company << " are:" << endl;
    cout << "\t\t\t|";
    cout.width(10);
     cout << "ID"<< "\t|";
     cout.width(12);
     cout << "Name"<< "   \t|";
     
     cout.width(8);
     cout << "PLACED STATUS"<<"\t|";
     cout  << endl;
    
    for( auto i = j.begin(); i != j.end(); i++ ){
        if(i->second->companyName == company){  
            cout << "\t\t\t|";
    cout.width(10);
     cout << i->first << "\t|";
     cout.width(12);
     cout << i->second->getname()<< "   \t|";
     
     cout.width(8);
     cout << i->second->getPlacedStatus()<<"\t|";
     cout << endl;
        }
    }
}


void  batchwise_placement_details(map<string,JobOffer*> j){
   string  b;
    cout << "Which  Batch? (M.Tech ICT/B.Tech ICT)" << endl;
    cin.ignore();
    getline(cin, b);

        cout << "The students of  "<< b << " are as follows: " << endl;
        cout << "\t\t\t|";
        cout.width(10);
        cout << "ID"<< "\t|";
        cout.width(12);
        cout << "Name"<< "   \t|";
        cout.width(6);
        cout << "BATCH" <<  "   \t|";
        cout.width(8);
        cout << "PLACED STATUS"<<"\t|";
        cout  << endl;
        cout << "\t\t\t-------------------------------------------------------------------------\n";
        

    for(auto i = j.begin(); i != j.end(); i++ ){
        if (i->second->getbatch() == b){
            cout << "\t\t\t|";
            cout.width(10);
            cout << i->first << "\t|";
            cout.width(12);
            cout << i->second->getname()<< "   \t|";
            cout.width(6);
            cout << i->second->getbatch() <<  "   \t|";
            cout.width(8);
            cout << i->second->getPlacedStatus()<<"\t|";
            cout << endl;
            cout << "\t\t\t-------------------------------------------------------------------------\n";     
           }
    }
}void display_choice1(int choice1,map<string,Student*>&students,map<string,Internship*>& internships,map<string,Schedule*>& schedule,map<string,JobOffer*>& jf)
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
        cout<<"ENTER 4 - PLACEMENT PROCESS STATUS" << endl;
        int ch;
        cout << "Enter your choice: ";
        cin >> ch;
        cout << "Enter the ID no:" ;
        string ID_NUMBER;
        cin >> ID_NUMBER;
        switch(ch){
        case 1:
            cout<< "YOU OPTED TO VIEW DETAILS OF A PARTICULAR STUDENT."<< endl;
            display_particularstudent(students, ID_NUMBER);
            break;
        case 2:
            cout<< "YOU OPTED TO VIEW INTERNSHIP DETAILS:"<<endl;
           
            display_internship(internships,ID_NUMBER);
            break;
        case 3:
        cout<<"YOU OPTED TO VIEW SCHEDULE DETAILS:"<<endl;
        display_schedule(ID_NUMBER,schedule);
        break;
        case 4:
        cout << "YOU OPTED FOR DETAILS RELATED TO THE STATUS OF PLACEMENT PROCESS OF A STUDENT:"<<endl;
        display_joboffers(jf,ID_NUMBER);
    }
        
    }
}
void display_allcompany(vector<company> &company)
{
    cout << "\n\t\t\t\t\t\t  LIST OF COMPANY\n";
    cout.width(6);
    cout<<"\t\t| SERIAL.NO"<<"|";
    cout.width(15);
    cout<<" COMPANY NAME"<<"|";
    cout.width(20);
    cout<<" ADDRESS OF COMPANY"<<"|";
    cout.width(7);
    cout<<" PACKAGE"<<"|";
    cout.width(10);
    cout<<" HIRED_STUDENTS"<<"|";
    cout.width(7);
    cout<<" CRITERIA"<<"|";
    cout.width(11);
    cout<<" NO. OF ALUMNI"<<"|";
    cout.width(15);
    cout<<" PRESENT_AT_CAMPUS"<<"|";
    cout<<endl;
    cout<<"\t\t\\\\\\\\\\\\---------------------------------------------------------------------------------------------//////";
    cout << endl;
    int index = 1;
        for(auto company : company)
        {
            cout<<"\t\t";
            // cout.width(8);
            // cout<<"|  "<<index++<<" |";
            cout.width(12);
            cout<< company.cmpname<<"|";
            cout.width(20);
            cout<< company.cmpaddress<<"|";
            cout.width(7);
            cout<< company.package<<"|";
            cout.width(10);
            cout<< company.hiredstudents<<"|";
            cout.width(7);
            cout<< company.criteria<<"|";
            cout.width(11);
            cout<< company.no_of_alumni<<"|";
            cout.width(15);
            cout<<company.cmpname<<"|";
            cout.width(20);
            cout<<company.cmpaddress<<"|";
            cout.width(7);
            cout<<company.package<<"|";
            cout.width(10);
            cout<<company.hiredstudents<<"|";
            cout.width(7);
            cout<<company.criteria<<"|";
            cout.width(11);
            cout<<company.no_of_alumni<<"|";
            cout.width(15);
            cout<<company.at_college<<"|\n";
        }
}
void display_choice2(int choice2,map<string,JobOffer*> j,map<string,Student*> &student)
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
            median_package(j);
            break;
        case 4:
        int year;
        cout << "YOU OPTED TO VIEW THE PAST PLACEMENT DETAILS" << endl;
        cout << "ENTER THE YEAR(YYYY FORMAT):- ";
        cin >> year;
        Past_details(year);
        break;
        
        // default:
        //     cout<<"LOCATION WISE:"<<endl;
        //     location_based_details(j);
        //     break;
    }
}

void display_choice(int choice,map<string,Student*> &students,vector<company> &company,map<string,Internship*>& internships,map<string,Schedule*>& schedule,map<string,JobOffer*>& jf)
{
    switch (choice)
    {
    case 1:
        cout<<"YOU OPTED TO DISPLAY ONGOING PROCESS OF PLACEMENT:"<<endl;
        cout<<"ENTER 1 - IF YOU WANT TO VIEW DETAILS OF ALL STUDENTS."<<endl;
        cout<<"ENTER 2 - IF YOU WANT TO VIEW DETAIL OF A PARTICULAR STUDENT."<<endl;
        int choice1;
        cin >> choice1;
        display_choice1(choice1,students,internships,schedule,jf);
        break;
    case 2:
        cout<<"YOU OPTED TO VIEW THE PLACEMENT DETAILS:"<<endl;
        cout << "ENTER 1 = TO DISPLAY" << BOLD <<" CURRENT " << RESET <<"PLACEMENT DETAILS BASED ON COMPANY NAME:"<<endl;
        cout << "ENTER 2 = TO DISPLAY" << BOLD <<" CURRENT " << RESET <<" PLACEMENT DETAILS BATCHWISE:"<<endl;
        cout << "ENTER 3 = TO DISPLAY" << BOLD <<" CURRENT " << RESET <<" PLACEMENT STATISTICS:"<<endl;
        cout << "ENTER 4 - TO DISPLAY" << BOLD <<" PAST " << RESET <<" PLACEMENT DETAILS." << endl;
       // cout << "ENTER 4 = TO DISPLAY PLACEMENT DETAILS LOCATION WISE:"<<endl;


        int choice2;
        cin >> choice2;
        display_choice2(choice2,jf,students);
        break;
    
    case 3:
        cout<<"YOU OPTED TO VIEW THE COMPANY DETAILS:";
        display_allcompany(company);
        break;

    // case 4:
    //     cout<<"IF YOU WANT TO GO TO PREVIOUS MENU."<<endl;
    //     display(students,company, internships,schedule, jf,data);
    //     break;
        
    }

}


void display(map<string,Student*> &students,vector<company> &company,map<string,Internship*>& internships,map<string,Schedule*>& schedule,map<string,JobOffer*>& jf)
{
    
    cout<<"Enter 1 to display ongoing process of placement"<<endl;
    cout<<"Enter 2 to display the  placement program details"<<endl;
    cout << "Enter 3 to display company details." << endl;
    cout<<BOLD<<"ENTER YOUR CHOICE:"<<RESET;
    int c; cin >> c;
    display_choice(c,students,company,internships,schedule,jf);
}

#endif