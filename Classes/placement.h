#include<iostream>
using namespace std;
#ifndef PLACEMENT_H
#define PLACEMENT_H
#include <string>
#include <vector>
#include<map>
#include<algorithm>
#include"..\Classes\JobOffers.h"

class placement{
    //vector<string> package_offered;
    int avgpackage;
    int highestpackage;
    float rate_of_placement;
    int appeared; //appeared for placement drive
    int placed; //placed at the end of drive

//constructor
placement( int &avgpackage, int &highestpackage, float rate_of_placement, int appeared, int placed){
    
    this->avgpackage = avgpackage;
    this->highestpackage = highestpackage;
    this->rate_of_placement = rate_of_placement;
    this->appeared = appeared;
    this->placed = placed;
}
    //getter


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
friend void median_package(map<string,JobOffer*>& j);
};
void max_package(map<string, JobOffer*>&j) {
    int max = 0;
    for (auto i = j.begin(); i != j.end(); i++) {
        if (i->second->getpackage() > max)
            max = i->second->getpackage();
            }

            cout << "Highest Package is : " << max << "LPA"<< endl;
    }


void mean_package(map<string,JobOffer*>& j){
    double sum=0;
    int count = 0;
    for (auto i = j.begin(); i != j.end(); i++) {
        sum += i->second->getpackage();
        count++;
    }
        int mean = sum/count;
        cout << "The mean package this year is: " << mean << "LPA" << endl;
}
void median_package(map<string,JobOffer*>& j){
    int count = 0;
    for (auto i = j.begin(); i != j.end(); i++) {
        count++;
    }
    int k = 0;
    int arr[count];
    for(auto i = j.begin(); i != j.end(); i++){
        arr[k] =i->second->getpackage();
        k++;
    }
    sort(arr, arr+count-1);
    if (count % 2 == 0){
        int d = (arr[count/2]+arr[(count/2) + 1]);
        cout  << "Median of the Packages is:  "<<d<<" LPA"<<endl;
    }
    else{
        cout << "Median of the package is:  "<<arr[(count+1)/2]<<" LPA"<<endl;
    }
    
}




#endif
