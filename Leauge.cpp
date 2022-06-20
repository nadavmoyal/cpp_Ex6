#include "Leauge.hpp"
using namespace std;

Leauge::Leauge(vector<Team> Teams){
    unsigned int i = 0; 
     while(i<20){
        this->TeamList.push_back(Teams[i]);
        i++;
    }
}


void Leauge::tournament(){
    Team * current;  
    unsigned int i = 0;
    unsigned int j = 0;
    while(i<20){
        current = &(this->TeamList[i]);
    while(j<20){
            current->result=(rand() % 100 + 55);
            if(current->get_name() != TeamList[j].get_name()){
                TeamList[j].result = (rand() % 100 + 50);
                if(current->get_talent()>TeamList[j].get_talent()){
                    current->result+=10;
                }
                else{
                    TeamList[j].result+=10;
                }
                if(current->result>TeamList[j].result)
                    current->wins+=1;
                else TeamList[j].wins+=1;
        }
        j++;
    }
    i++;
}

}

