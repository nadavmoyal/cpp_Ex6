#include <iostream>
#include <string>

using namespace std;
class Team
{
private:
    string name;
    double talent;

public:
    int wins;
    int losses;
    int SumOfWins;
    int result;

    Team(string name,double talent);
    string get_name(){
        return this->name;
    }
    int get_wins(){
        return this->wins;
    }
    int get_losses(){
        return this->losses;
    }
      int get_talent(){
        return this->talent;
    }
    void set_name(string _name){
        this->name = _name;
    }
    void set_talent(double _talent){
        this->talent = _talent;
    }
    friend ostream & operator<<(ostream &s,Team &_team);
    
    bool operator< (Team & _team);
    int SumOfWinsFunc(Team & _team);

    ~Team();
};


