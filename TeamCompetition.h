#ifndef TEAMCOMPETITION_H_INCLUDED
#define TEAMCOMPETITION_H_INCLUDED

// TODO Fill this Up!!!


#include "Team.h"
#include "Competition.h"
#include "FoodAward.h"

class TeamCompetition : public Competition {
protected:
	// This is the Food Award variable
	FoodAward foodAward;

public:
	// Constructor
	TeamCompetition():Competition(){ foodAward = FoodAward(); for(int i=0;i<19;++i)rounds[i] = Round();};
	TeamCompetition(int id, string name, FoodAward f):Competition(id,name){foodAward=f;};

	// Destructor
	~TeamCompetition(){cout << "TeamComp with the beautifull name " << this->name << " just destroyed." << endl; };

	// Setters
	void setFoodAward(FoodAward f){ this->foodAward = f;}

	// Getters
	FoodAward getFoodAward() {return foodAward;}

	int compete(Team &team1, Team &team2);
};
#endif // TEAMCOMPETITION_H_INCLUDED
