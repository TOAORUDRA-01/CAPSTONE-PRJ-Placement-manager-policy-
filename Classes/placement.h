#include<iostream>
using namespace std;
#ifndef PLACEMENT_H
#define PLACEMENT_H
#include <string>
#include <vector>
#include<map>
#include"..\Classes\JobOffers.h"
#include <bits/stdc++.h>
class placement{
    //vector<string> package_offered;
    int avgpackage;
    int highestpackage;
    float rate_of_placement;
    int appeared; //appeared for placement drive
    int placed; //placed at the end of drive

//constructor
placement( int &avgpackage, int &highestpackage, float rate_of_placement, int appeared, int placed){
    // for(int i = 0;i<package_offered.size();i++){
    //     this->package_offered = package_offered;
    // }
    this->avgpackage = avgpackage;
    this->highestpackage = highestpackage;
    this->rate_of_placement = rate_of_placement;
    this->appeared = appeared;
    this->placed = placed;
}
    //getter
// vector<string> getPackage_offered() const{
//         return package_offered;}

int getAvgpackage() const{
    return avgpackage;}

int getHighestpackage() const{
    return highestpackage;}

float getRate_of_Placement() const{
    return rate_of_placement;}

int getAppeared() const{
    return appeared;}

int getPlaced() const{
    return placed;}

//setters
// void setPackage_offered(const vector<string>& package) {
//     package_offered = package;}

void setAvgpackage(const int& avgpackage) {
     this->avgpackage = avgpackage;}

void setHighestpackage(const int& highestpackage) {
     this->highestpackage = highestpackage;}

void setRate_of_placement(float rate_of_placement) {
    this->rate_of_placement = rate_of_placement;}

void setAppeared(int appeared) {
    this->appeared = appeared;}

void setPlaced(int placed) {
    this->placed = placed;}
friend void max_package(std::map<long, JobOffer*>&j);
friend void mean_package(std::map<long,JobOffer*>&j);
};
void max_package(map<long, JobOffer*>&j) {
    int max = 0;
    for (auto i = j.begin(); i != j.end(); i++) {
        if (i->second->getpackage() > max)
            max = i->second->getpackage();
            }

            cout << "Highest Package is :" << max << endl;
    }


void mean_package(map<long,JobOffer*>& j){
    double sum=0;
    int count = 0;
    for (auto i = j.begin(); i != j.end(); i++) {
        sum += i->second->getpackage();
        count++;
    }
        int mean = sum/count;
        cout << "The mean package this year is: " << mean << endl;
}


#endif
