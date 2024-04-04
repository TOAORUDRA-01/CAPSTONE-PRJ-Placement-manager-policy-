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
vector<string> getPackage_offered() const{
        return package_offered;}

string getAvgpackage() const{
    return avgpackage;}

string getHighestpackage() const{
    return highestpackage;}

float getRate_of_Placement() const{
    return rate_of_placement;}

int getAppeared() const{
    return appeared;}

int getPlaced() const{
    return placed;}

//setters
void setPackage_offered(const vector<string>& package) {
    package_offered = package;}

void setAvgpackage(const string& avgpackage) {
     this->avgpackage = avgpackage;}

void setHighestpackage(const string& highestpackage) {
     this->highestpackage = highestpackage;}

void setRate_of_placement(float rate_of_placement) {
    this->rate_of_placement = rate_of_placement;}

void setAppeared(int appeared) {
    this->appeared = appeared;}

void setPlaced(int placed) {
    this->placed = placed;}    
};

#endif
