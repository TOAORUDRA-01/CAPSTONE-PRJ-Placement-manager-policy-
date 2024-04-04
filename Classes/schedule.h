#ifndef SCHEDULE_H
#define SCHEDULE_H
#include <bits/stdc++.h>
using namespace std;
class Schedule{
    long id; string stdname,cmpname;//unordered_map<int, string> status = {{0,"Complete"}, {1,"Fail"}}; //for interview
    string s_time, e_time,date,location; //the timings for interview of individuals

    public:
    Schedule(long id,string name,string cmpname,string date,string s_time, string e_time,string location){
        this->id = id;
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

    string getname() const{
        return name;}

    string get_stime()const{
        return s_time;
    }

    string get_etime() const{
        return e_time;
    }

    //All setters
    void setid(const int& id){
        this->id=id;}

    void setname(const string& name){
        this->name=name;}

    void sets_time(const string s){
        s_time = s;
    }

     void sete_time(const string e){
        e_time = e;
    }

    friend class Schedule;
    friend ostream& operator<<(ostream& ,Schedule& schedule);

};
ostream& operator<<(ostream& out,Schedule& schedule){
    out<<"\t || SCHEDULE ||"<<endl;
    out<<"Student ID:  "<<schedule.id<<endl;
    out<<"Student Name:  "<<schedule.name<<endl;
    out<<"Start Time:  "<<schedule.s_time<<endl;
    out<<"End Time:  "<<schedule.e_time<<endl;
    out<<"Date of Interview:  "<<schedule.date<<endl;
    out<<"Company Name:  "<<schedule.cmpname<<endl;
    out<<"Room No. :  "<<schedule.location<<endl;
    return out;
}
#endif
