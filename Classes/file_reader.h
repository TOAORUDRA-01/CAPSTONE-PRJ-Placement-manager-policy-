#ifndef FILE_READER.H
#define FILE_READER.H
#include <bits/stdc++.h>
#include<fstream>
using namespace std;

//including other header files
#include"..\Classes\company.h"
#include"..\Classes\schedule.h"
#include"..\Classes\student.h"
#include"..\Classes\internship.h"
#include"..\Classes\JobOffers.h"

void tokenize_student(string s,map<long,Student*> &ms){
    stringstream line(s);
    string temp;
    vector<Internship> internships;

    vector<string> row_info;
    int i = 0;
    while(getline(line,temp,',')){
        row_info.push_back(temp);
        i++;
        
    }
    

    //adding value to the data
    ms[stol(row_info[0])] = new Student(stol(row_info[0]),row_info[1],row_info[2],stod(row_info[3]),stoi(row_info[4]),row_info[5],row_info[6]);
    

}

//tokenising company details
void tokenize_company(string s, vector<company>& data){
    string temp;
    stringstream line(s);
    vector<string> c_row_info;

    while(getline(line,temp,',')){
        c_row_info.push_back(temp);
    }

    company* c = new company(c_row_info[0],c_row_info[1],stod(c_row_info[2]),stoi(c_row_info[3]),c_row_info[4],stoi(c_row_info[5]),stoi(c_row_info[6]));
    data.push_back(*c);
}

//tokenizing internship file
void tokenize_internship(string s, map<long,vector<Internship>>& mr,vector<Internship>& data){
    string temp;
    stringstream line(s);
    vector<string> i_row_info;
    

    while(getline(line,temp,',')){
        i_row_info.push_back(temp);
    }

    for (int i = 1; i<= i_row_info.size();){
        Internship* inter = new Internship(i_row_info[i++],i_row_info[i++],stoi(i_row_info[i++]),i_row_info[i++]);
        data.push_back(*inter);
        }
        mr[stoi(i_row_info[0])] = data;

}
void tokenizing_schedule(string s,map<long,Schedule*>&data){
    string temp;
    stringstream line(s);
    vector<string> row;

    while(getline(line,temp,',')){
        row.push_back(temp);
}

    Schedule* sche = new Schedule(stol(row[0]),row[1],row[2],row[3],row[4],row[5],row[6]);
    data[stol(row[0])]=sche;
}

void tokenize_jobOffers(string s, map<long,JobOffer*>& mj) {
    string temp;
    stringstream line(s);
    vector<string> j_row;

    while(getline(line,temp,',')){
        j_row.push_back(temp);
}

    JobOffer* job = new JobOffer(stoi(j_row[0]),j_row[1],j_row[2],j_row[3],j_row[4],j_row[5]);
    mj[stol(j_row[0])] = job;
}


void read_file(map<long,Student*> &students,vector<company> &company,map<long,vector<Internship>>& internships,map<long,Schedule*>& schedule,map<long,JobOffer*>& jf,vector<Internship>&data){
    ifstream fin;
    string line;
    fin.open("./Data/Student.csv");
    while(!fin.eof()){
        fin >> line;
        tokenize_student(line,students);
    }
    fin.close();

    fin.open("./Data/company.csv");
    while(!fin.eof()){
        fin >> line;
        tokenize_company(line,company);
    }
    fin.close();

    fin.open("./Data/Internship.csv");
    while(!fin.eof()){
        fin >> line;
        tokenize_internship(line,internships,data);
    }
    fin.close();

    fin.open("./Data/Joboffer.csv");
    while(!fin.eof()){
        fin >> line;
        tokenize_jobOffers(line,jf);
    }
    fin.close();



}


#endif