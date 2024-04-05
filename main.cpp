#include<iostream> 
#include<bits/stdc++.h>
 #include<fstream>
 #include"Classes/company.h"
 #include"Classes/schedule.h"
 #include"Classes/student.h"
 #include"Classes/internship.h"
 #include "Classes/JobOffers.h"
 #include"Utilities/display.h"
using namespace std;

int main(){
    map<long, Student*>students;
    map<long,Schedule*>schedule;
    map<long, JobOffer*> Joboffers;
    vector<company> company;
    map<long,vector<Internship>> internships;
    vector<Internship>inter;
    display(students,company,internships,schedule,Joboffers,inter);

return 0;

}