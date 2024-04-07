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
  string id;
  string name;
  string yearOfPlacement;
  string program;
  double cgpa;
  string email;
  string phone;

  


  // Constructor to initialize student object
  Student(const string& name,  const string& program, double cgpa,string year, const string& email, const string& phone){
    //this->id = id;
    this->name = name;
    yearOfPlacement = year;
    this->program = program;
    this->cgpa = cgpa;
    this->email = email;
    this->phone = phone;
    
    
   
  }
  
   // Getters
    string getName() const{
        return name;
    }
    string getYearOfPlacement() const{
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
friend void display_particularstudent(map<string,Student*>  &Students,string ID_NO);
};
void display_particularstudent(map<string,Student*>  &Students,string ID_NO)
{
    Student* s = Students[ID_NO];
    cout << "\t\t\t----------------------------------------------------------------------------"<<endl;
    cout << "\t\t\t\t\t\t|| STUDENT DETAILS ||" << endl<<endl;
    cout << "\t\t\t  ID: " << ID_NO << endl;
    cout << "\t\t\t  Name: " << s->name << endl;
    cout << "\t\t\t  Year of Placement: " << s->yearOfPlacement << endl;
    cout << "\t\t\t  Program: " << s->program << endl;
    cout << "\t\t\t  CGPA: " << s->cgpa << endl;
    cout << "\t\t\t  Email Id : " << s->email << endl;
    cout << "\t\t\t  Phone Number : " << s->phone << endl;    
    
    cout<<"\t\t\t----------------------------------------------------------------------------"<<endl;
}

#endif

    
