#ifndef TEAMCOMPETITION_H_INCLUDED
#define TEAMCOMPETITION_H_INCLUDED

// TODO Fill this Up!!!

#include "Competition.h"
#include "FoodAward"
#include "Round.h"

class TeamComp : public Comp {
protected:
	// This is the Food Award variable
	FoodAward foodAward;
	// An Array or rounds, as it apears from the vairbles name 'rounds'
	Round rounds[19];

public:
	// Constructor
	TeamComp():Comp(){ foodAward = FoodAward(); for(int i=0;i<19;++i)rounds[i] = Round();};
	TeamComp(int id, string name, FoodAward f):TeamComp(id,name);
	
	// Destructor
	~TeamComp():~Comp() {cout << "TeamComp with the beautifull name " << this.name << " just destroyed." << endl; };

	// Setters
	void setFoodAward(FoodAward f){ this.foodAward = f;};
	void setRound(int i, Round 

#endif // TEAMCOMPETITION_H_INCLUDED
