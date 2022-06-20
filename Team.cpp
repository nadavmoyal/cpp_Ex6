#include "Team.hpp"


Team::Team(string _name,double _talent){
    this->set_name(_name);
    this->set_talent(_talent);
}

ostream &operator<<(ostream &s,Team &_team)
{
    s <<"Team: " << _team.get_name()<<"Win: "<<_team.wins<<"Losses: "<<_team.losses<<endl;
    return s;    
}


bool Team::operator< ( Team & other){
    if(this->wins<other.wins){
        return true;
    }
    else if( this->wins == other.wins){
            return false;
    }
}   

int Team::SumOfWinsFunc(Team & _team){
    _team.SumOfWins=_team.wins;
    return SumOfWins;
}



