#ifndef SCHEDULE_H
#define SCHEDULE_H
#include <iostream>
using namespace std;
class Schedule{
        public:
    string id; string stdname,cmpname;//unordered_map<int, string> status = {{0,"Complete"}, {1,"Fail"}}; //for interview
    string s_time, e_time,date,location; //the timings for interview of individuals

    Schedule(string name,string cmpname,string date,string s_time, string e_time,string location){
        
        this->stdname = name;
        this->s_time=s_time;
        this->e_time=e_time;
        this->date=date;
        this->cmpname=cmpname;
        this->location=location;
    };


    //All getters
    // string getStatus(bool b) { 
    //     return status[b];
    // }
    string getid() const{
        return id;}

    string getstdname() const{
        return stdname;}

    string get_stime()const{
        return s_time;
    }

    string get_etime() const{
        return e_time;
    }

    string getdate() const{
        return date;}

    string getcmpname() const{
        return cmpname;}

    string getlocation() const{
        return location;}

    //All setters
    void setid(const string& id){
        this->id=id;}

    void setstdname(const string& name){
        this->stdname=name;}

    void sets_time(const string s){
        s_time = s;
    }

     void sete_time(const string e){
        e_time = e;
    }
    void setdate(const string& date){
        this->date=date;
    }
    void setcmpname(const string& cmpname){
        this->cmpname=cmpname;
    }
    void setlocation(const string& location){
        this->location=location;
    }
friend void display_schedule(string ID, map<string,Schedule*>& j);
};

void display_schedule(string ID, map<string,Schedule*>& schedule)
{    Schedule* sche = schedule[ID];
    cout<<"\t\t\t\t\t || SCHEDULE ||"<<endl;
    cout << "\t\t\t----------------------------------------------------------------------------"<<endl;

    cout<<"\t\t\tStudent ID:  "<<ID<<endl;
    cout<<"\t\t\tStudent Name:  "<<sche->stdname << endl;
    cout<<"\t\t\tStart Time:  "<<sche->s_time<<endl;
    cout<<"\t\t\tEnd Time:  "<<sche->e_time<<endl;
    cout<<"\t\t\tDate of Interview:  "<<sche->date<<endl;
    cout<<"\t\t\tCompany Name:  "<<sche->cmpname<<endl;
    cout<<"\t\t\tRoom No. :  "<<sche->location<<endl;
    cout << "\t\t\t----------------------------------------------------------------------------"<<endl;

    
}


#endif
