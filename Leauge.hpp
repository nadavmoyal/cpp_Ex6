#include <iostream>
#include <string>
#include <vector>
#include "Team.hpp"

using namespace std;
class Leauge{

private:
    vector<Team> TeamList;
public:
    Leauge(vector<Team> Teams);
    friend ostream &operator<<(ostream &s,Leauge &_Leauge);
    ~Leauge();
    void tournament();
};


