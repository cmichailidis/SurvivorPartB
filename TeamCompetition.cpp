// TODO Fill this Up!!!
#include <iostream>
#include <string>
#include "TeamCompetition.h"

using namespace std;

TeamCompetition::TeamCompetition(int id, string name, FoodAward f):Competition(id,name) {
    this.foodAward = f;
}

int TeamCompetition::compete(Team &team1, Team &team2) {
    int w1 = team1.wins, w2 = team2.wins, i = 0;
    w1 = 0; w2 = 0;

    while(w1 < 10 && w2 < 10) {
        Player p1 = *( team1.getPlayers() + (rand() % team1.getNumberOfPlayers()) );
        Player p2 = *( team2.getPlayers() + (rand() % team2.getNumberOfPlayers()) );

        p1.compete();
        p2.compete();

        if(p1.power == p2.power) {
            if(p1.hunger < p2.hunger) {
                rounds[i] = Round(i, 500, p1.name);
                w1++;
            } else {
                rounds[i] = Round(i, 500, p2.name);
                w2++;
            }
        }
        if(p1.power > p2.power) {

        }
    }

    for(int i2=0; i2 < i; i++) rounds[i2].status();

    if(w1 == 10){
        team1.setWins(team1.getWins() + 1);
        team1.setSupplies(team1.getSupplies() + foodAward.bonusSupplies);
    } else {
        team2.setWins(team2.getWins() + 1);
        team2.setSupplies(team2.getSupplies() + foodAward.bonusSupplies);
    }

}
