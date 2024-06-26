#include<iostream>
using namespace std;
#ifndef COMPANY_H
#define COMPANY_H
#include <string>
#include <vector>

class company {
    public:
    string cmpname;
    string cmpaddress;
    string package;
    string hiredstudents;
    string criteria; // CGPA or none
    string no_of_alumni;
    string at_college; //present at college or not

//constructor
company(const string &cmpname, const string &cmpaddress, string package, string hiredstudents, string criteria, string no_of_alumni, string at_college){
    this->cmpname = cmpname;
    this->cmpaddress = cmpaddress;
    this->package = package;
    this->hiredstudents = hiredstudents;
    this->criteria = criteria;
    this->no_of_alumni = no_of_alumni;
    this->at_college = at_college; 
}

    //Getter
    string getcmpname() const{
        return cmpname;
    }
    string getcmpaddress() const{
        return cmpaddress;
    }
    string getpackage() const{
        return package;
    }
    string gethiredstudents() const{
        return hiredstudents;
    }
    string getno_of_alumni() const{
        return no_of_alumni;
    }
    string getat_college() const{
        return at_college;
    }
    string getcriteria() const{
        return criteria;
    }

    //Setter
    void setname(const string &cmpname){
        this->cmpname = cmpname;
    }
    void setcmpadrress(const string &cmpaddress){
        this->cmpaddress = cmpaddress;
    }
    void setpackage(const string &package){
        this->package = package;
    }
    void sethiredstudents(const string &hiredstudents){
        this->hiredstudents = hiredstudents;
    }
    void setno_of_alumni(const int &no_of_alumni){
        this->no_of_alumni = no_of_alumni;
    }
    void setat_college(const int &at_college){
        this->at_college = at_college;
    }
    void setcriteria(const string &criteria){
        this->criteria = criteria;
    }
};

#endif
