// TODO Fill this Up!!!

#include "TeamCompetition.h"

TeamCompetition::TeamCompetition():Competition(){

    foodAward = FoodAward();
    rounds = new Round [19];
}

TeamCompetition::TeamCompetition(int id, string name, FoodAward f):Competition(id,name){

    foodAward = f;
    rounds = new Round [19];

}

int TeamCompetition::compete(Team &team1, Team &team2){
    int i = 0, w1 = 0, w2 = 0;

    while(w1 < 10 && w2 < 10) {
        Player p1 = *( team1.getPlayers() + (rand() % team1.getNumberOfPlayers()) );
        Player p2 = *( team2.getPlayers() + (rand() % team2.getNumberOfPlayers()) );

        p1.compete();
        p2.compete();

        if(p1.getPower() == p2.getPower()) {
            if(p1.getHunger() < p2.getHunger()) {
                rounds[i] = Round(i, 500, p1.getName());
                i++;
                w1++;
            } else {
                rounds[i] = Round(i, 500, p2.getName());
                i++;
                w2++;
            }
        }
        else if(p1.getPower() > p2.getPower()) {
            rounds[i] = Round(i, 500, p1.getName());
            i++;
            w1++;
        } else {
            rounds[i] = Round(i, 500, p2.getName());
            i++;
            w2++;
        }
    }

    for(int i2=0; i2 < i; i++) rounds[i2].status();

    if(w1 == 10){
        team1.setWins(team1.getWins() + 1);
        team1.setSupplies(team1.getSupplies() + foodAward.getBonusSupplies());
        return 0;
    } else {
        team2.setWins(team2.getWins() + 1);
        team2.setSupplies(team2.getSupplies() + foodAward.getBonusSupplies());
        return 1;
    }

}
