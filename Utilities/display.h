#include<iostream>
#define BOLD "\033[1m"
#define RESET "\033[0m"
using namespace std;
#ifndef DISPLAY_H
#define DISPLAY_H
#include"company.h"
#include"placement.h"
#include"schedule.h"
void display()
{
    cout<<"Enter 1 to display ongoing process of placement"<<endl;
    cout<<"Enter 2 to display the past placement program details"<<endl;
    cout<<BOLD<<"ENTER YOUR CHOICE:"<<RESET<<endl;
}
void display_choice1(int choice1)
{
    if(choice1 == 1)
    {
        cout<<"THIS IS THE TABLE CONTAINING PLACEMENT DATA OF ALL STUDENTS:"<<endl;
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
        void display_choice1(int choice1);
        break;

    
    case 2:
        cout<<"YOU OPTED TO DISPLAY THE PAST PLACEMENT PROGRAM DETAILS"<<endl;
        break;

    default:
        break;
    }

}
#endif

