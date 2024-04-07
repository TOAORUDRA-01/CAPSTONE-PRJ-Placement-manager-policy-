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
    map<string,Internship*> internships;
    

    read_file(students,company, internships, schedule,Joboffers);
    display(students,company,internships,schedule,Joboffers);
    
    
return 0;

}