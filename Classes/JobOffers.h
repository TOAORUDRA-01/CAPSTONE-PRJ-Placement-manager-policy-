#ifndef JOBOFFER_H
#define JOBOFFER_H
#include <iostream>
#include <string>
using namespace std;

class JobOffer {
private:
    string id;
    string name,batch; //of students
    
    string writtenTestStatus;
    string interviewStatus;
    string placed;
    int package;

    
public:
string companyName;
JobOffer(){};
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

    void setInterviewStatus(string interviewStatus) {
        this->interviewStatus = interviewStatus;
    }

    void setPlacedStatus(string placed) {
        this->placed = placed;
    }
    void setbatch(string batch) {
        this->batch = batch;
    }
friend void display_joboffers(map<string,JobOffer*>& joboffer,string id);
};
void change_status(char c,map<string,JobOffer*> &j,string id){
    if(c == 'y'){
        JobOffer* j1 = j[id];
        string status1;
        cout << "ENTER WHAT YOU WANT TO ADD FOR INTERVIEW STATUS: (PASS/FAIL):";
        cin >> status1;
        j1->setInterviewStatus(status1);
        cout << "ENTER WHAT YOU WANT TO ADD FOR PLACEMENT STATUS: (YES/NO):";
        cin >> status1;
        j1->setPlacedStatus(status1);

        cout << "Updated details:" << endl;
        display_joboffers(j,id);
    }
    else{
        return;
    }


}

void display_joboffers(map<string,JobOffer*>& joboffer,string id)
{
    JobOffer* j = joboffer[id];
    cout << "\t\t\t----------------------------------------------------------------------------"<<endl;
    cout << "\t\t\t\t\t\t|| PLACEMENT PROCESS DETAILS ||" << endl<<endl;
    cout << "\t\t\tStudent ID: " << id << endl;
    cout << "\t\t\tStudent Name: " << j->getname() << endl;
    cout << "\t\t\tBatch:" << j->getbatch() << endl;
    cout << "\t\t\tCompany Name: " << j->getCompanyName() << endl;
    cout << "\t\t\tWritten Test Status: " << j->getWrittenTestStatus() << endl;
    cout << "\t\t\tInterview Status: " << j->getInterviewStatus() << endl;
    cout << "\t\t\tPlaced or Not: " << j->getPlacedStatus() << endl;
    cout << "\t\t\tPackage:" << j->getpackage() << "LPA" << endl;
    cout << "\t\t\t----------------------------------------------------------------------------"<<endl;

    cout <<  "\nDo you want to change your interview and placement status?? (y/n)";
    char c; cin >> c;
    change_status(c,joboffer,id);
    // JobOffer* j1 = joboffer[id];
    
    
}



#endif 
