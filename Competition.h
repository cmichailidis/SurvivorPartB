<<<<<<< HEAD
#ifndef COMPETITION_H_INCLUDED
#define COMPETITION_H_INCLUDED

// TODO Fill this Up!!!
#include <iostream>
#include <string>

class Competition {
protected:
    int id;
    string name;
    string winner;

public:
    void setId(int id) {this->id = id;}
    void setName(string name) {this->name = name;}
    void setWinner(string winner) {this->winner = winner;}

    int getId(void) {return this->id;}
    string getName(void) {return this->name;}
    string getWinner(void) {return this->winner;}

    Competition() { this->id = 0;this->name = "";this->winner = "";};

    Competition(int id, string name) {this->id = id;this->name = name;};
};
#endif // COMPETITION_H_INCLUDED
=======
#ifndef COMPETITION_H_INCLUDED
#define COMPETITION_H_INCLUDED

// TODO Fill this Up!!!
#include <iostream>
#include <string>

using namespace std;

class Competition {
protected:
    int id;
    string name;
    string winner;
public:
    void setId(int id) {this->id = id;}
    void setName(string name) {this->name = name;}
    void setWinner(string winner) {this->winner = winner;}
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
>>>>>>> 0ab9e473fc8d977a8a2615a60aad0ac0fedd38ae
