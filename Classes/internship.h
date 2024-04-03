#include <iostream>
#include <string>
using namespace std;
#ifndef Internship_H
#define Internship_H

class Internship{
        private:
        string name;
        int duration;
        string type;
        
        public:
        Internship(string name, int duration, string type) {
        this->name = name;
        this->duration = duration;
        this->type = type;
    }
    friend class Student;
    friend ostream& operator<<(ostream& ,Internship& internship);
    
}; 
ostream& operator<<(ostream& out,Internship& internship){
    out<<"\t || INTERNSHIP DETAILS ||"<<endl;
    out<<"Name of Internship: "<<internship.name<<endl;
    out<<"Duration: "<<internship.duration<<endl;
    out<<"Paid or Unpaid: "<<internship.type<<endl;
    return out;
}

#endif
