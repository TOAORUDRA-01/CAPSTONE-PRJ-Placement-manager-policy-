#ifndef JOBOFFER_H
#define JOBOFFER_H
#include <iostream>
#include <string>
using namespace std;

struct JobOffer {
private:
    int id;
    string name;
    string companyName;
    string writtenTestStatus;
    string interviewStatus;
    bool placed;
    
public:
    JobOffer(const int id, const string& name, const string& companyName, const string& writtenTestStatus, const string& interviewStatus, bool isplaced){
        this->id = id;
        this->name = name;
        this->companyName = companyName;
        this->writtenTestStatus = writtenTestStatus;
        this->interviewStatus = interviewStatus;
        this->placed = isplaced;
    }
    
    //getters
    int getid() const {
        return id;
    }
    
    string getname() const {
        return name;
    }
    
    string getCompanyName() const {
        return companyName;
    }
    
    string getWrittenTestStatus() const {
        return writtenTestStatus;
    }
    
    string getInterviewStatus() const {
        return interviewStatus;
    }
    
    bool getPlacedStatus() const {
        return placed;
    }
    
    // setters
    void setid(int id) {
        this->id = id;
    }
    
    void setname(const string& name) {
        this->name = name;
    }
    
    void setCompanyName(const string& company) {
        this->companyName = company;
    }

    void setWrittenTestStatus(const string& writtenTestStatus) {
        this->writtenTestStatus = writtenTestStatus;
    }

    void setInterviewStatus(const string& interviewStatus) {
        this->interviewStatus = interviewStatus;
    }

    void setPlacedStatus(bool placed) {
        this->placed = placed;
    }
};

ostream& operator<<(ostream& out, JobOffer& joboffer) {
    out << "\t || JOB OFFERS ||" << endl;
    out << "Student ID: " << joboffer.getid() << endl;
    out << "Student Name: " << joboffer.getname() << endl;
    out << "Company Name: " << joboffer.getCompanyName() << endl;
    out << "Written Test Status: " << joboffer.getWrittenTestStatus() << endl;
    out << "Interview Status: " << joboffer.getInterviewStatus() << endl;
    out << "Placed or Not: " << joboffer.getPlacedStatus() << endl;
    return out;
}

#endif 
// JOBOFFER_H
