#ifndef PAST_DETAILS_H
#define PAST_DETAILS_H
#include<iostream>
#include <fstream>
#include"..\Utilities\display.h"
using namespace std;

#include"..\Classes\file_reader.h"

class Alumni{
     public:
    string id,name,phone,cmpname,branch;
    int yearOfPlacement,salary;
    Alumni(string name,string branch, int year, string phone,string cmpname,int sal){
        this->name=name;
        this->yearOfPlacement=year;
        this->phone=phone;
        this->cmpname=cmpname;
        salary = sal;
        this->branch = branch;
    }
};
void display_past_details(map<string,Alumni*>& alumni) {
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
     cout.width(6);
     cout << "Year"<<"\t|" ;
     cout.width(15);
     cout << "MOBILE NO."<<"\t|";
      cout.width(13);
     cout << "COMPANY PLACED"<<"\t|" ;
     cout.width(9);
     cout << "SALARY"<<"\t|";
     
     cout << endl;
     cout<<"\t\t\t-----------------------------------------------------------------------------------------------------------------"<<endl;
    // /int index = 0;
    for( auto i = alumni.begin(); i != alumni.end(); i++ )
    { 
            cout<<"\t\t\t";
            cout.width(10);
            cout << i->first << "\t|";
            cout.width(12);
            cout << i->second->name << "\t|";
            cout.width(8);
            cout << i->second->branch << "\t| ";
            cout.width(6);
            cout << i->second->yearOfPlacement << "\t|";
            cout.width(15);
            cout << i->second->phone<<"\t|";
            cout.width(13);
            cout << i->second->cmpname<<"\t|" ;
            cout.width(9);
            cout << i->second->salary<< " LPA" << "\t|";
            cout << endl;     
     
}
cout << "\n"
          << endl;
     cout<<"\t\t\t-----------------------------------------------------------------------------------------------------------------"<<endl;
     cout<<"\n\n";
}
void tokenize_alumni(string s, map<string,Alumni*>& a){
    stringstream line(s);
    string temp;
    
    vector<string> row_info;
    while(getline(line,temp,',')){
        row_info.push_back(temp);        
    }
    
    //adding value to the data
    a[row_info[0]] = new Alumni(row_info[1],row_info[2],stoi(row_info[3]),row_info[4],row_info[5],stoi(row_info[6]));
}

void Past_details(int year){

    ifstream fin;
    string line;
    map<string,Alumni*> alumni;

    switch(year){
        case 2023:
        // Read Student file
        fin.open("./Data/Student.csv");
        getline(fin,line);
        fflush(stdin);
        while (getline(fin, line)) {
            tokenize_alumni(line, alumni);
        }
        fin.close();
        fin.clear();
        display_past_details(alumni);
        break;
        
        case 2022:
        // Read Student file
        fin.open("./Data/Student.csv");
        getline(fin,line);
        fflush(stdin);
        while (getline(fin, line)) {
            tokenize_alumni(line, alumni);
        }
        fin.close();
        fin.clear();
        display_past_details(alumni);
        break;
        
        case 2021:
        // Read Student file
        fin.open("./Data/2021_Placement_Details.csv");
        getline(fin,line);
        fflush(stdin);
        while (getline(fin, line)) {
            tokenize_alumni(line, alumni);
        }
        fin.close();
        fin.clear();
        display_past_details(alumni);
        break;
        
        case 2020:
        // Read Student file
        fin.open("./Data/2020_Placement_Details.csv");
        getline(fin,line);
        fflush(stdin);
        while (getline(fin, line)) {
            tokenize_alumni(line, alumni);
        }
        fin.close();
        fin.clear();
        display_past_details(alumni);
        break;
        
    }
}


#endif