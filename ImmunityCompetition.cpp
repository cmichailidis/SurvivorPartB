// TODO Fill this Up!!!
#include <iostream>
#include <string>
#include "Competition.h"
#include "ImmunityCompetition.h"
#include "Award.h"
#include "ImmunityAward.h"
#include "Team.h"
#include "Player.h"

using namespace std;

void ImmunityCompetition::setImmunityAward(ImmunityAward immunityAward) {
    this->immunityAward = immunityAward;
}

ImmunityAward ImmunityCompetition::getImmunityAward(void) {
    return this->immunityAward;
}

ImmunityCompetition::ImmunityCompetition():Competition() {
    this->immunityAward = ImmunityAward();
}

ImmunityCompetition::ImmunityCompetition(int id, string name, ImmunityAward immunityAward):Competition(id, name) {
    this->immunityAward = immunityAward;
}

ImmunityCompetition::~ImmunityCompetition() {
    cout << "The Immunity Competition is over" << endl;
}

void ImmunityCompetition::status(void) {

    Competition::status();
    cout << "Award Info" << endl;
    (this->immunityAward).status();
    cout << "=============================" << endl;

}

void ImmunityCompetition::compete(Team &team) {
    int num = team.getNumberOfPlayers();
    Player *temp = team.getPlayers();
    Player *winner;
    int maximum = temp->getPower();

    for(int i=0; i<num; i++) {
        if( maximum < (temp+i)->getPower()) {
            maximum = (temp+i)->getPower();
            winner = temp + i;
        }
    }

    this->immunityAward.setName(winner->getName());
}
