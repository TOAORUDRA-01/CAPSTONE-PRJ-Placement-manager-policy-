#ifndef PAST_DETAILS_H
#define PAST_DETAILS_H
#include<iostream>
#include<algorithm>
#include <fstream>
#include<map>
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
    cout << "\t\t\t\t\t\t\t\t  || LIST OF STUDENTS ||\n"<< endl;
    //  cout.width(10);
    //  cout << "\t\t\t| Serial No."<< "|";
    cout << "\t\t\t|";
    cout.width(10);
     cout << "ID"<< "\t|";
     cout.width(12);
     cout << "Name"<< "   |";
     cout.width(8);
     cout << "Branch"<<"\t|";
     cout.width(6);
     cout << "Year"<<"  \t|" ;
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

void past_mean(map<string,Alumni*> &a){
     double sum=0;
    int count = 0;
    for (auto i = a.begin(); i != a.end(); i++) {
        sum += i->second->salary;
        count++;
    }
        int mean = sum/count;
        cout << "The mean package this year is: " << mean << "LPA" << endl;
}

void past_median(map<string,Alumni*> &a){
    vector <int> v;
    for(auto i = a.begin(); i != a.end(); i++){
        v.push_back(i->second->salary);
    }
    // cout << "Before sorting :";
    // for(int i = 0 ; i < v.size() ; i++){
    //     cout << v[i] << "  ";
    // }
    // cout << endl;

    sort(v.begin(),v.end());
    // cout << "After Sorting :";
    // for(int i = 0 ; i < v.size() ; i++ ) {
    //     cout << v[i] << "  ";
    // }

    int l = v.size();
    if(v.size()%2==0){
        float d = (v[(l/2)-1] + v[(l/2 + 1)-1])/2.0;
        cout << "\nMedian is : " << d << " LPA" << endl;
    }
    else{
        float d = v[((l+1)/2)-1];
        cout << "\nMedian is : " << d << " LPA" << endl;
    }
    // int count = 0;
    // for (auto i = a.begin(); i != a.end(); i++) {
    //     count++;
    // }
    // int k = 0;
    // int arr[count];
    // for(auto i = a.begin(); i != a.end(); i++){
    //     arr[k] =i->second->salary;
    //     k++;
    // }
    // sort(arr, arr+count-1);
    // if (count % 2 == 0){
    //     int d = (arr[count/2]+arr[(count/2) + 1]);
    //     cout  << "Median of the Packages is:  "<<d<<" LPA"<<endl;
    // }
    // else{
    //     cout << "Median of the package is:  "<<arr[(count+1)/2]<<" LPA"<<endl;
    // }
}

void past_highest(map<string,Alumni*>& a){
    int max = 0;
    for (auto i = a.begin(); i != a.end(); i++) {
        if (i->second->salary > max)
            max = i->second->salary;
            }

            cout << "Highest Package is : " << max << "LPA"<< endl;
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
        fin.open("./Data/Student_2023(Batch).csv");
        getline(fin,line);
        fflush(stdin);
        while (getline(fin, line)) {
            tokenize_alumni(line, alumni);
        }
        fin.close();
        fin.clear();
        break;
        
        case 2022:
        // Read Student file
        fin.open("./Data/Student_2022(Batch).csv");
        getline(fin,line);
        fflush(stdin);
        while (getline(fin, line)) {
            tokenize_alumni(line, alumni);
        }
        fin.close();
        fin.clear();
        break;
        
        case 2021:
        // Read Student file
        fin.open("./Data/Student_2021(Batch).csv");
        getline(fin,line);
        fflush(stdin);
        while (getline(fin, line)) {
            tokenize_alumni(line, alumni);
        }
        fin.close();
        fin.clear();
        break;
        
        case 2020:
        // Read Student file
        fin.open("./Data/Student_2020(Batch).csv");
        getline(fin,line);
        fflush(stdin);
        while (getline(fin, line)) {
            tokenize_alumni(line, alumni);
        }
        fin.close();
        fin.clear();
        break;
        
    }

    cout << "ENTER 1 - TO DISPLAY DETAILS OF ALL ALUMNI:" << endl;
    cout << "ENTER 2 - TO DISPLAY STATASTICS OF PARTICULAR YEAR" << endl;
    int temp;cin >> temp;
    if(temp == 1){
        display_past_details(alumni);
    }
    else if(temp == 2){
        past_mean(alumni);
        past_median(alumni);
        past_highest(alumni);
    }

}


#endif