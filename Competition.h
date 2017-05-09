#ifndef COMPETITION_H_INCLUDED
#define COMPETITION_H_INCLUDED

// TODO Fill this Up!!!
#include <iostream>
#include <string>
#include "Round.h"

using namespace std;

class Competition {
protected:
    int id;
    string name;
    string winner;
    Round rounds[19];

public:
    void setId(int id) {this->id = id;}
    void setName(string name) {this->name = name;}
    void setWinner(string winner) {this->winner = winner;}
    void setRound(int i, Round r){rounds[i] = r;}
    void setRounds(Round rs[19]){for(int i=0;i<10;i++) setRound(i, rs[i];)}

    int getId(void) {return this->id;}
    string getName(void) {return this->name;}
    string getWinner(void) {return this->winner;}


    Competition() {
        this->id = 0;
        this->name = "";
        this->winner = "";
    }
    Competition(int id, string name) {
        this->id = id;
        this->name = name;
    }
};
#endif // COMPETITION_H_INCLUDED
