#ifndef SCHEDULE_H
#define SCHEDULE_H
#include <bits/stdc++.h>
using namespace std;
class Schedule{
    long id; string name;//unordered_map<int, string> status = {{0,"Complete"}, {1,"Fail"}}; //for interview
    string s_time, e_time; //the timings for interview of individuals

    public:
    Schedule(long id,string name,string s_time, string e_time){
        this->id = id;
        this->name = name;
        this->s_time=s_time;
        this->e_time=e_time;
    };


    //All getters
    // string getStatus(bool b) { 
    //     return status[b];
    // }

    string get_stime()const{
        return s_time;
    }

    string get_etime() const{
        return e_time;
    }

    //All setters
    void sets_time(const string s){
        s_time = s;
    }

     void sete_time(const string e){
        e_time = e;
    }

    friend void display_schedule();

};

#endif