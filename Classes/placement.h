#include<iostream>
using namespace std;
#ifndef PLACEMENT_H
#define PLACEMENT_H
#include <string>
#include <vector>
class placement{
    vector<string> package_offered;
    string avgpackage;
    string highestpackage;
    float rate_of_placement;
    int appeared; //appeared for placement drive
    int placed; //placed at the end of drive

//constructor
placement(vector<string> package, string &avgpackage, string &highestpackage, float rate_of_placement, int appeared, int placed){
    for(int i = 0;i<package_offered.size();i++){
        this->package_offered = package_offered;
    }
    this->avgpackage = avgpackage;
    this->highestpackage = highestpackage;
    this->rate_of_placement = rate_of_placement;
    this->appeared = appeared;
    this->placed = placed;
}
    //getter
    
};

#endif
