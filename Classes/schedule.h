#ifndef SCHEDULE_H
#define SCHEDULE_H
#include <bits/stdc++.h>
using namespace std;
class Schedule{
    unordered_map<int, string> status = {{0,"complete"}, {1,"incomplete"}};
    string s_time, e_time; //the timings for interview of individuals

    public:
    Schedule(){};


    //All getters
    string getStatus(bool b) { 
        return status[b];
    }

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