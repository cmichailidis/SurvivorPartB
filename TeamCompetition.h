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
	TeamCompetition();
	TeamCompetition(int id, string name, FoodAward f);

	// Destructor
	~TeamCompetition(){cout << "TeamComp with the beautifull name " << this->name << " just destroyed." << endl; };

	// Setters
	void setFoodAward(FoodAward f){ this->foodAward = f;}

	// Getters
	FoodAward getFoodAward() {return foodAward;}

	int compete(Team &team1, Team &team2);
};
#endif // TEAMCOMPETITION_H_INCLUDED
