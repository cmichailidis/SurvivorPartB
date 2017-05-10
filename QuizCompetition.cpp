// TODO Fill this Up!!!
#include "QuizCompetition.h"
#include <cmath>

QuizCompetition::QuizCompetition():Competition() {
    communicationAward = CommunicationAward();
    rounds = new Round [19];
}

QuizCompetition::QuizCompetition(int id, string name, CommunicationAward award):Competition(id,name) {
    communicationAward = award;
    rounds = new Round [19];
}

void QuizCompetition::compete(Team &team1, Team &team2) {
    int w1 = 0, w2 = 0, i = 0;

    while (w1 < 10 && w2 < 10) {

        Player p1 = *( team1.getPlayers() + (rand() % team1.getNumberOfPlayers()) );
        Player p2 = *( team2.getPlayers() + (rand() % team2.getNumberOfPlayers()) );

        string q = questions[rand() % 10];
        int a = answers[rand() % 10];

        int a1 = rand() % 11, a2 = rand() %11;

        if(abs(a - a1) < abs(a - a2)) {
            this->rounds[i] = Round(i, 20, p1.getName());
            i++;
            w1++;
        } else if (abs(a - a1) > abs(a - a2)){
            this->rounds[i] = Round(i, 20, p2.getName());
            i++;
            w2++;
        } else {
            continue;
        }
    }

    for(int i2=0; i2 < i; i++) rounds[i2].status();

    if(w1 == 10){
        team1.setWins(team1.getWins() + 1);
    } else {
        team2.setWins(team2.getWins() + 1);
    }
}
