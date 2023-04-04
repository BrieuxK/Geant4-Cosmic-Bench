/*
Package nécessaires pour le test dans le main()
Pas utile pour la classe en elle-même
#include <ostream>
#include <string>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <numeric>
*/
#include "MyHit.hh"



double MyHit::GetEdep() {return fEdep;}

void MyHit::SetEdep(double edep) {fEdep = edep;}

double MyHit::GetHitTime() {return hitTime;}

void MyHit::SetHitTime(double hit_time) {hitTime = hit_time;}

int MyHit::GetChannelNbr() {return channelNbr;}

void MyHit::SetChannelNbr(int channel_number) {channelNbr = channel_number;}


/*
Simples tests

using namespace std;

int main() {
    MyHit part1, part2, part3, part4, part5;
    part1.fEdep = 10.;
    part1.hitTime= 5.;
    //
    part2.fEdep = 9.;
    part2.hitTime= 6.;
    //
    part3.fEdep = 12.;
    part3.hitTime= 7.;
    //
    part4.fEdep = 7.;
    part4.hitTime= 8.;
    //
    part5.fEdep = 8.;
    part5.hitTime= 9.;
    
    double hitTime_vec[] = {part1.hitTime, part2.hitTime, part3.hitTime, part4.hitTime, part5.hitTime};
    double min_hitTime = *std::min_element(hitTime_vec,hitTime_vec+5) ;
    
    double fEdep_vec[] = {part1.fEdep, part2.fEdep, part3.fEdep, part4.fEdep, part5.fEdep};
    //auto sum_Edep = std::accumulate(fEdep_vec.begin(), fEdep_vec.end(),0);
    double sum = 0;
    for(int i = 0; i < 5; i++)
    {
       sum += fEdep_vec[i] ; 
    }
    
    
    
    std::cout << min_hitTime << std::endl;
    std::cout << sum << std::endl;
    
    double digitization[] = {min_hitTime, sum};
    
    ofstream file ("Test_writing_in_file.txt", ios::app);
    if(file){
        file << digitization << std::endl; //écrit en hexadécimal
        file << "Ui" << std::endl;
    }
    else{
        std::cout << "Nique" << std::endl ;
    }
    
}
*/
