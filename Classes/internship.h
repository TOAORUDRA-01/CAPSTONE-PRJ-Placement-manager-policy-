#include <iostream>
#include <string>
#include<vector>
using namespace std;
#ifndef Internship_H
#define Internship_H

class Internship{
        private:
        string name;
        int duration;
        string type;
        int sr_no;
        string stdname;  //student name who is doing internship
        
        public:
       vector<Internship> internships;
        Internship(int sr_no,string stdname,string name, int duration, string type) {
        this->name = name;
        this->sr_no = sr_no;
        this->stdname = stdname;
        this->duration = duration;
        this->type = type;
    }

    //getting or setting internships
    void add_internships()
    {

        bool flag = true;
        string name, type,stdname; 
        int sr_no,duration ;
        char c;
        cout << "  Enter the internship details which you want to add:" << endl;

        while (flag)
        {
            cout << "  Enter the sr no: ";
            cin >> sr_no;
            cout << "  Enter the internship name: ";
            cin >> name;
            cout << "  Enter the internship type: ";
            cin >> type;
            cout << "  Enter the duration of internship: ";
            cin >> duration;
            cout << "  Do you want to add more internships? (y/n): ";
            cin >> c;
            Internship *inter = new Internship(sr_no,stdname,name,duration,type);
            internships.push_back(*inter);
            if (c == 'n')
            {
                flag = false;
            }
        }
    }

    
    void show_internship(){
        cout << "\t\t\t\t\t\tINTERNSHIP DETAILS:" << endl;
        cout << "\n\t\tName \t\t\t\t\t\t Duration(in weeks) \t\t\t\t\t\t Type" << endl;
        cout << "---------------------------------------------------------------------------------------------------" << endl;
int index = 0;
        for(int i = 0; i<internships.size();i++){
            cout << index++ << "||" << "\t\t" << internships[i].name << "\t\t\t\t\t\t" << internships[i].duration << "\t\t\t\t\t\t" << internships[i].type  << endl;  
        }
    }
    friend class Student;
    friend ostream& operator<<(ostream& ,Internship& internship);
    
    
    
}; 
ostream& operator<<(ostream& out,Internship& internship){
    out<<"\t || INTERNSHIP DETAILS ||"<<endl;
    out<<"Name of Internship: "<<internship.name<<endl;
    out<<"Duration: "<<internship.duration<<endl;
    out<<"Type: "<<internship.type<<endl;
    return out;
}

#endif
