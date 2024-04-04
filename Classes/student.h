#include <iostream>
using namespace std;

#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <unordered_map>
#include <vector>
class Student {
public:
  // Member variables
  int id;
  string name;
  int yearOfPlacement;
  string program;
  double cgpa;
  string email;
  string phone;
vector<Internship> internships;
  


  // Constructor to initialize student object
  Student(const int id,const string& name,  const string& program, double cgpa,int year, const string& email, const string& phone,Intenrnship* inter){
    this->id = id;
    this->name = name;
    yearOfPlacement = year;
    this->program = program;
    this->cgpa = cgpa;
    this->email = email;
    this->phone = phone;
    internships.push_back(*inter);
    
   
  }
   // Getters
    string getName() const{
        return name;
    }
    int getYearOfPlacement() const{
        return yearOfPlacement;
    }
    string getProgram() const{
        return program;
    }
    float getCGPA() const{
        return cgpa;
    }
    string getEmailId() const{
        return email;
    }
    string getPhoneNumber() const{
        return phone;
    }
    vector<string> getInternships() const{
        return Internships;
    }
    vector<string> getProjects() const{
        return Projects;
    }

    // Setters
    void setName(const string& name){
        this->name = name;
    }
    void setYearOfPlacement(int yearOfPlacement){
        this->yearOfPlacement = yearOfPlacement;
    }
    void setProgram(const string& program){
        this->program = program;
    }
    void setCGPA(float cgpa){
        this->cgpa = cgpa;
    }
    void setEmailId(const string& emailId){
        email = emailId;
    }
    void setPhoneNumber(const string& phoneNumber){
        phone = phoneNumber;
    }

    // Other member functions
   
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

    // Other member functions
    void show_internship(){
        cout << "\t\t\t\t\t\tINTERNSHIP DETAILS:" << endl;
        cout << "\n\t\tName \t\t\t\t\t\t Duration(in weeks) \t\t\t\t\t\t Type" << endl;
        cout << "---------------------------------------------------------------------------------------------------" << endl;
int index = 0;
        for(int i = 0; i<internships.size();i++){
            cout << index++ << "||" << "\t\t" << internships[i].name << "\t\t\t\t\t\t" << internships[i].duration << "\t\t\t\t\t\t" << internships[i].type  << endl;  
        }
    }
friend ostream &operator<<(ostream &out, Student &);
};

ostream &operator  <<(ostream &out, Student &student){
out << "\t\t\t----------------------------------------------------------------------------"<<endl;
out << "\t\t\t\t\t\t|| STUDENT DETAILS ||" << endl<<endl;
out << "  ID: " << student.id << endl;
out << "  Name: " << student.name << endl;
    out << "  Year of Placement: " << student.yearOfPlacement << endl;
    out << "  Program: " << student.program << endl;
    out << "  CGPA: " << student.cgpa << endl;
    out << "  Email Id : " << student.email << endl;
    out << "  Phone Number : " << student.phone << endl;
    return out;
}
#endif
