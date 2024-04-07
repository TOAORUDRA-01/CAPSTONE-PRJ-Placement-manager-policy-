#include <iostream>
#include <string>
#include<vector>
using namespace std;
#ifndef Internship_H
#define Internship_H

class Internship{
       public:
        string cmpname1,cmpname2;
        string duration1,duration2;
        string type1,type2;
        string sr_no;
        string stdname;  //student name who is doing internship
        
       vector<Internship> internships;
        Internship(string stdname,string cmpname1, string duration1, string type1,string cmpname2, string duration2, string type2) {
        this->cmpname1 = cmpname1;
        this->cmpname2 = cmpname2;
       // this->sr_no = sr_no;
        this->stdname = stdname;
        this->duration1 = duration1;
        this->type1 = type1;
        this->duration2 = duration2;
        this->type2 = type2;
    }
    
    friend void display_internship(map<string,Internship*>&inter,string ID_NUMBER);
    
}; 
void display_internship(map<string,Internship*>&inter,string ID_NUMBER){
    Internship* s = inter[ID_NUMBER];
    cout << "\t\t\t----------------------------------------------------------------------------"<<endl;
    cout << "\t\t\t\t\t\t|| INTERNSHIP DETAILS ||" << endl<<endl;
    cout << "\t\t\t  ID: " << ID_NUMBER << endl;
    cout << "\t\t\t  COMPANY Name 1: " << s->cmpname1 << endl;
    cout << "\t\t\t  DURATION1: " << s->duration1 << endl;
    cout << "\t\t\t  TYPE1: " << s->type1 << endl;
    cout << "\t\t\t  COMPANY NAME 2: " << s->cmpname2 << endl;
    cout << "\t\t\t  DURATION 2 : " << s->duration2 << endl;
    cout << "\t\t\t  TYPE 2 : " << s->type2 << endl;    
    
    cout<<"\t\t\t----------------------------------------------------------------------------"<<endl;
}

#endif 
