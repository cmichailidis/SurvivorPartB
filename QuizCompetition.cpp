// TODO Fill this Up!!!
#include "QuizCompetition.h"

using namespace QuizCompetition;

QuizCompetition():Competition() {
    communicationAward = CommunicationAward();
    rounds = new Round [19];
}

QuizCompetition(int id, string name, CommunicationAward award):Competition(id,name) {
    communicationAward = award;
    rounds = new Round [19];
}

int compete(Team, &team1, Team &team2) {
    int w1 = 0, w2 = 0;

    while (w1 < 10 && w2 < 10) {

        Player p1 = *( team1.getPlayers() + (rand() % team1.getNumberOfPlayers()) );
        Player p2 = *( team2.getPlayers() + (rand() % team2.getNumberOfPlayers()) );

        string q = questions[rand() % 10], a = answers[rand() % 10];

        int
    }


}
