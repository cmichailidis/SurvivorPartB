#ifndef TEAMCOMPETITION_H_INCLUDED
#define TEAMCOMPETITION_H_INCLUDED

// TODO Fill this Up!!!


#include "Team.h"
#include "Competition.h"
#include "FoodAward.h"
#include "Round.h"

class TeamCompetition : public Competition {
protected:
	// This is the Food Award variable
	FoodAward foodAward;
	// An Array or rounds, as it apears from the vairbles name 'rounds'
	Round rounds[19];

public:
	// Constructor
	TeamCompetition():Competition(){ foodAward = FoodAward(); for(int i=0;i<19;++i)rounds[i] = Round();};
	TeamCompetition(int id, string name, FoodAward f):Competition(id,name);

	// Destructor
	~TeamCompetition():~Competition() {cout << "TeamComp with the beautifull name " << this.name << " just destroyed." << endl; };

	// Setters
	void setFoodAward(FoodAward f){ this.foodAward = f;};
	void setRound(int i, Round r){this.rounds[i] = r[i];};

	int Compete(Team &team1, Team &team2);

#endif // TEAMCOMPETITION_H_INCLUDED
