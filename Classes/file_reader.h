#ifndef FILE_READER_H
#define FILE_READER_H
//#include <bits/stdc++.h>
#include<iostream>
#include "string"
#include<vector>
#include<fstream>
#include<map>
using namespace std;

//including other header files
#include"company.h"
#include"schedule.h"
#include"student.h"
#include"internship.h"
#include"JobOffers.h"
#include"..\Classes\past_details.h"

void tokenize_student(string s,map<string,Student*> &ms){
    stringstream line(s);
    string temp;
    
    vector<string> row_info;
    while(getline(line,temp,',')){
        row_info.push_back(temp);        
    }
    
    //adding value to the data
    ms[row_info[0]] = new Student(row_info[1],row_info[2],stod(row_info[3]),row_info[4],row_info[5],row_info[6]);
    

}

//tokenising company details
void tokenize_company(string s, vector<company>& data){
    string temp;
    stringstream line(s);
    vector<string> c_row_info;
    while(getline(line,temp,',')){
        c_row_info.push_back(temp);
    }
    company* c = new company(c_row_info[0],c_row_info[1],c_row_info[2],c_row_info[3],c_row_info[4],c_row_info[5],c_row_info[6]);
    data.push_back(*c);
}

//tokenizing internship file
void tokenize_internship(string s, map<string,Internship*>& mr){
    string temp;
    stringstream line(s);
    vector<string> i_row_info;
    

    while(getline(line, temp, ',')) {
        i_row_info.push_back(temp);
    }

    Internship* data = new Internship(i_row_info[1],i_row_info[2],i_row_info[3],i_row_info[4],i_row_info[5],i_row_info[6],i_row_info[7]); 

    mr[i_row_info[0]] = data;

}
void tokenizing_schedule(string s,map<string,Schedule*>&data){
    string temp;
    stringstream line(s);
    vector<string> row;

    while(getline(line,temp,',')){
        row.push_back(temp);
}

    Schedule* sche = new Schedule(row[1],row[2],row[3],row[4],row[5],row[6]);
    data[row[0]]=sche;
}

void tokenize_jobOffers(string s, map<string,JobOffer*>& mj) {
    string temp;
    stringstream line(s);
    vector<string> j_row;

    while(getline(line,temp,',')){
        j_row.push_back(temp);
}

    JobOffer* job = new JobOffer(j_row[1],j_row[2],j_row[3],j_row[4],j_row[5],j_row[6],stoi(j_row[7]));
    mj[j_row[0]] = job;
}




void read_file(map<string,Student*> &students, vector<company> &companies, map<string,Internship*>& internships, map<string,Schedule*>& schedule, map<string,JobOffer*>& jobOffers) {
    ifstream fin;
    string line;

    // Read Student file
    fin.open("./Data/Student.csv");
    getline(fin,line);
    fflush(stdin);
    while (getline(fin, line)) {
        tokenize_student(line, students);
    }
    fin.close();

    // Clear end-of-file flag
    fin.clear();

    // Read Company file
    fin.open("./Data/Company.csv");
    getline(fin,line);
    fflush(stdin);
    while (getline(fin, line)) {
        tokenize_company(line, companies);
    }
    fin.close();

    // Clear end-of-file flag
    fin.clear();

    //Read Internship file
    fin.open("./Data/Internship.csv");
    getline(fin,line);
    fflush(stdin);
    while (getline(fin, line)) {
        tokenize_internship(line, internships);
    }
    fin.close();

    // Clear end-of-file flag
    fin.clear();

    //Read JobOffer file
    fin.open("./Data/JobOffer.csv");
    getline(fin,line);
    fflush(stdin);
    while (getline(fin, line)) {
        tokenize_jobOffers(line, jobOffers);
    }
    fin.close();
    fin.clear();

    fin.open("./Data/Schedule.csv.csv");
    getline(fin,line);
    fflush(stdin);
    while(getline(fin, line)){
        tokenizing_schedule(line, schedule);
}
fin.close();
fin.clear();
}

#endif
