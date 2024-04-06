#ifndef JOBOFFER_H
#define JOBOFFER_H
#include <iostream>
#include <string>
using namespace std;

class JobOffer {
private:
    string id;
    string name,batch; //of students
    string companyName;
    string writtenTestStatus;
    string interviewStatus;
    string placed;
    int package;

    
public:
    JobOffer( const string& name,const string& batch, const string& companyName, const string& writtenTestStatus, const string& interviewStatus, string isplaced,int package){
        //this->id = id;
        this->batch = batch;
        this->name = name;
        this->companyName = companyName;
        this->writtenTestStatus = writtenTestStatus;
        this->interviewStatus = interviewStatus;
        this->placed = isplaced;
        this->package = package;

    }
    
    //getters
    int getpackage() const {
        return package;
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
    
    string getPlacedStatus() const {
        return placed;
    }
    string getbatch() const {
        return batch;
    }
    
    // setters
    void setpackage(int p) {
        this->package = p;
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

    void setPlacedStatus(string placed) {
        this->placed = placed;
    }
    void setbatch(string batch) {
        this->batch = batch;
    }
    friend ostream& operator<<(ostream& out, JobOffer& joboffer);
};


ostream& operator<<(ostream& out, JobOffer& joboffer)
{
    out << "\t || JOB OFFERS ||" << endl;
    out << "Student ID: " << joboffer.id << endl;
    out << "Student Name: " << joboffer.getname() << endl;
    out << "Batch:" << joboffer.getbatch() << endl;
    out << "Company Name: " << joboffer.getCompanyName() << endl;
    out << "Written Test Status: " << joboffer.getWrittenTestStatus() << endl;
    out << "Interview Status: " << joboffer.getInterviewStatus() << endl;
    out << "Placed or Not: " << joboffer.getPlacedStatus() << endl;
    out << "Package:" << joboffer.getpackage() << "LPA" << endl;
    return out;
}

#endif 
// JOBOFFER_H
