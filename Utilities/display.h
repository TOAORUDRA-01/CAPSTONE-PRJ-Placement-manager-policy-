#include<iostream>
#define BOLD "\033[1m"
#define RESET "\033[0m"
using namespace std;
#ifndef DISPLAY_H
#define DISPLAY_H
#include"../Classes/company.h"
#include"../Classes/company.h"
#include"schedule.h"
#include"student.h"
#include <bits/stdc++.h>
void display()
{
    cout<<"Enter 1 to display ongoing process of placement"<<endl;
    cout<<"Enter 2 to display the past placement program details"<<endl;
    cout<<BOLD<<"ENTER YOUR CHOICE:"<<RESET<<endl;
    int c; cin >> c;
    display_choice(c);
}
void display_choice1(int choice1)
{
    if(choice1 == 1)
    {
        cout<<"THIS IS THE TABLE CONTAINING DATA OF ALL STUDENTS:"<<endl;
        void display_allstudents();
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
            
            display_particularstudent(map<long,Student*>  &Students,ID_NUMBER);
        }
        else if(ch == 2)
        {
            cout<< "YOU OPTED TO VIEW INTERNSHIP DETAILS:"<<endl;
            display_internships()
        }
    }
    else if(choice1 == 3)
    {
        cout<<"YOU OPTED TO VIEW COMPANY DETAILS"<<endl;
    }
};
void display_choice2(int choice2)
{
    switch(choice2)
    {
        case 1:
            cout<<"YOU OPTED TO VIEW THE PLACEMENT DETAILS THROUGH COMPANY NAMES."<<endl;
            break;
        
        case 2:
            cout<<"YOU OPTED TO VIEW PLACEMENT DETAILS BATCH WISE."<<endl;

            break;
        
        case 3:
            cout<<"YOU OPTED TO VIEW THE PLACEMENT DETAILS BASED ON STATISTICS:"<<endl;
            break;
        
        default:
            cout<<"LOCATION WISE:"<<endl;
    }
}
void display_choice(int choice)
{
    switch (choice)
    {
    case 1:
        cout<<"YOU OPTED TO DISPLAY ONGOING PROCESS OF PLACEMENT:"<<endl;
        cout<<"ENTER 1 - IF YOU WANT TO VIEW DETAILS OF ALL STUDENTS."<<endl;
        cout<<"ENTER 2 - IF YOU WANT TO VIEW DETAIL OF A PARTICULAR STUDENT."<<endl;
        int choice1;
        cin >> choice1;
        display_choice1(choice1);
        break;
    case 2:
        cout<<"YOU OPTED TO VIEW THE PLACEMENT DETAILS:"<<endl;
        int choice2;
        cin >> choice2;
        cout << "ENTER 1 = TO DISPLAY PLACEMENT DETAILS BASED ON COMPANY NAME:"<<endl;
        cout << "ENTER 2 = TO DISPLAY PLACEMENT DETAILS LOCATION WISE:"<<endl;
        cout << "ENTER 3 = TO DISPLAY PLACEMENT STATISTICS:"<<endl;
        cout << "ENTER 4 = TO DISPLAY PLACEMENT DETAILS BATCHWISE:"<<endl;
        display_choice2(choice2);
        break;
    
    default:
        break;
    }

}
#endif





void display_allstudents(map<long, Student*> &Student)
{
    for( auto i : &Students )
    {   
        cout << '\t' << i.first << '\t' << i.second << '\n';
    }
    // cout << "\t\t\t\t\t  || LIST OF STUDENTS ||\n"<< endl;
    // cout.width(3);
    // cout << "\t\t\t\t| Serial No."<< "|";
    // cout.width(12);
    // cout << "Name"<< "   \t|";
    // cout.width(10);
    // cout << "ID"<< "\t|";
    // cout.width(8);
    // cout << "Branch"<<"\t|";
    // cout.width(5);
    // cout << "CGPA"<<"\t|";
    // cout << endl; 
    // cout.width(6);
    // cout << "Year"<<"\t|" ;
    // cout << endl;
    // cout<<"\t\t\t\t-------------------------------------------------"<<endl;
    // int index = 1;
    //     for (auto student : Students)
    //     {   cout<<"\t\t\t\t";
    //         cout.width(3);
    //         cout << "|   "<<index++ << " \t    |";
    //         cout.width(15);
    //         cout << student.name << "\t|";
    //         cout.width(10);
    //         cout << student.id << "\t|";
    //         cout << endl;
    //         cout.width(8);
    //         cout << student.program << "\t| ";
    //         cout << endl;
    //         cout.width(20);
    //         if (student.cgpa < 3.0)
    //         {
    //             cout << "Not elligible for placement \t|" << endl;
    //         }
    //         else
    //         {
    //             cout << student.cgpa<< " ";
    //             cout << "[Eligible for placement] \t|"<<endl;
    //         }
    //         cout.width(6);
    //         cout << student.yearOfPlacement << " \t| ";
    //         cout << endl;
            
    //     }
    // cout << "\n"
    //      << endl;
    // cout<<"\t\t\t\t-------------------------------------------------"<<endl;
    // cout<<"\n\n";
}

void display_particularstudent(map<long,Student*>  &Students,int ID_NO)
{
    Student* s = Students[ID_NO];
    cout << s;
    
    cout<<"\t\t\t\t-------------------------------------------------"<<endl;
}

void display_internship(map<long,vector<internship>> &internships, long id)
{
    vector<internship>::iterator itr;   
    int flag=0; 
    cout << "Internship Details of the user are as follows:\n\n";
    for (itr = internships[id].begin(); itr != internships[id].end(); ++itr)    
    {            
        cout << "\nCompany Name : " << itr->companyName ;                                    
        cout << "\nDuration : From " << itr->startDate << " to " << itr->endDate;    
        cout << "\nType :" << itr->type <<endl;                 
        flag=1;                        
    }
    if(!flag)
        cout << "No Internship details found.";
    cout << "\n\n";
    
}

#endif