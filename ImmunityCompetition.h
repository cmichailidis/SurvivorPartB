#ifndef IMMUNITYCOMPETITION_H_INCLUDED
#define IMMUNITYCOMPETITION_H_INCLUDED

// TODO Fill this Up!!!
#include <iostream>
#include "Competition.h"
#include "Team.h"
#include "Award.h"
#include "ImmunityAward.h"

using namespace std;

class ImmunityCompetition:public Competition {
protected:
    ImmunityAward immunityAward;
public:
    void setImmunityAward(ImmunityAward immunityAward);
    ImmunityAward getImmunityAward(void);
    ImmunityCompetition();
    ImmunityCompetition(int id, string name, ImmunityAward immunityAward);
    ~ImmunityCompetition();
    void status(void);
    void compete(Team &team);
};

#endif // IMMUNITYCOMPETITION_H_INCLUDED
