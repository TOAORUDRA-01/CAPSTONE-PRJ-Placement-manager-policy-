#include<iostream> 
#include<bits/stdc++.h>
 #include<fstream>
 #include"Classes/schedule.h"
 #include"Classes/student.h"
 #include"Classes/internship.h"
 #include "Classes/JobOffers.h"
 #include"Utilities/display.h"
using namespace std;

int main(){
    map<string, Student*>students;
    map<string,Schedule*>schedule;
    map<string, JobOffer*> Joboffers;
    vector<company> company;
    map<string,vector<Internship>> internships;
    vector<Internship>inter;

    read_file(students,company, internships, schedule,Joboffers,inter);
    display(students,company,internships,schedule,Joboffers,inter);
    
    
return 0;

}