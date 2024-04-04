#include<iostream>
#define BOLD "\033[1m"
#define RESET "\033[0m"
using namespace std;
#ifndef DISPLAY_H
#define DISPLAY_H
#include"company.h"
#include"placement.h"
#include"schedule.h"
#include"student.h"
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
        cout<<"THIS IS THE TABLE CONTAINING PLACEMENT DATA OF ALL STUDENTS:"<<endl;
        void display_allstudents();
    }
    else if(choice1 == 2)
    {
        cout<<"THIS IS THE PLACEMENT DATA OF THE PARTICULAR STUDENT:"<<endl;
    }
};
void display_choice(int choice)
{
    
    switch (choice)
    {
    case 1:
        
        cout<<"YOU OPTED TO DISPLAY ONGOING PROCESS OF PLACEMENT."<<endl;
        cout<<"ENTER 1 - IF YOU WANT TO VIEW DETAILS OF ALL STUDENTS"<<endl;
        cout<<"ENTER 2 - IF YOU WANT TO VIEW DETAIL OF A PARTICULAR STUDENT"<<endl;
        int choice1;
        cin >> choice1;
        display_choice1(choice1);
        break;

    
    case 2:
        cout<<"YOU OPTED TO DISPLAY THE PAST PLACEMENT PROGRAM DETAILS"<<endl;
        break;

    default:
        break;
    }

}
#endif





void display_allstudents(vector<Student> &Students)
{
    cout << "\t\t\t\t\t  || LIST OF STUDENTS ||\n"<< endl;
    cout.width(3);
    cout << "\t\t\t\t| Serial No."<< "|";
    cout.width(12);
    cout << "Name"<< "   \t|";
    cout.width(10);
    cout << "ID"<< "\t|";
    cout.width(8);
    cout << "Branch"<<"\t|";
    cout.width(5);
    cout << "CGPA"<<"\t|";
    cout << endl; 
    cout.width(6);
    cout << "Year"<<"\t|" ;
    cout << endl;
    cout<<"\t\t\t\t-------------------------------------------------"<<endl;
    int index = 1;
        for (auto student : Students)
        {   cout<<"\t\t\t\t";
            cout.width(3);
            cout << "|   "<<index++ << " \t    |";
            cout.width(15);
            cout << student.name << "\t|";
            cout.width(10);
            cout << student.id << "\t|";
            cout << endl;
            cout.width(8);
            cout << student.program << "\t| ";
            cout << endl;
            cout.width(20);
            if (student.cgpa < 3.0)
            {
                cout << "Not elligible for placement \t|" << endl;
            }
            else
            {
                cout << student.cgpa<< " ";
                cout << "[Eligible for placement] \t|"<<endl;
            }
            cout.width(6);
            cout << student.yearOfPlacement << " \t| ";
            cout << endl;
            
        }
    cout << "\n"
         << endl;
    cout<<"\t\t\t\t-------------------------------------------------"<<endl;
    cout<<"\n\n";
}

void display_particularstudent(map<long,Student*>  &Students)
{
    int ID_NO;
    cout << "Enter the Student's ID:" << endl;
    cin  >> ID_NO;
    Student* s = Students[ID_NO];
    cout << s;
    
    cout<<"\t\t\t\t-------------------------------------------------"<<endl;
}