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
  vector<string> Internships;
  vector<string> Projects;
    


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
    void addInternship(const vector<string>& internship){
        this->Internships = internship;
    }
    void addProject(const vector<string>& project){
        this->Projects = project;
    }

};


#endif
