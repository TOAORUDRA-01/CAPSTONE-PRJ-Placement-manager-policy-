#include <iostream>
#include"..\Classes\internship.h"
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

  


  // Constructor to initialize student object
  Student(const int id,const string& name,  const string& program, double cgpa,int year, const string& email, const string& phone){
    this->id = id;
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
   

friend ostream &operator  <<(ostream &out, Student &student)
{
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
};
#endif

    