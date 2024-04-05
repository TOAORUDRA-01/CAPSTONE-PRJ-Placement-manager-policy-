#ifndef SCHEDULE_H
#define SCHEDULE_H
#include <bits/stdc++.h>
using namespace std;
class Schedule{
    long id; string stdname,cmpname;//unordered_map<int, string> status = {{0,"Complete"}, {1,"Fail"}}; //for interview
    string s_time, e_time,date,location; //the timings for interview of individuals

    public:
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
    long getid() const{
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
    void setid(const long& id){
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
    friend ostream& operator<<(ostream& ,Schedule& schedule);
};
ostream& operator<<(ostream& out,Schedule& schedule)
{
    out<<"\t || SCHEDULE ||"<<endl;
    out<<"Student ID:  "<<schedule.id<<endl;
    out<<"Student Name:  "<<schedule.stdname<<endl;
    out<<"Start Time:  "<<schedule.s_time<<endl;
    out<<"End Time:  "<<schedule.e_time<<endl;
    out<<"Date of Interview:  "<<schedule.date<<endl;
    out<<"Company Name:  "<<schedule.cmpname<<endl;
    out<<"Room No. :  "<<schedule.location<<endl;
    return out;
}

#endif
