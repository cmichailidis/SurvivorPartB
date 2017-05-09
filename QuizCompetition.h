#ifndef QUIZCOMPETITION_H_INCLUDED
#define QUIZCOMPETITION_H_INCLUDED

#include "Competition.h"

// TODO Fill this Up!!!

#include "Competition.h"
#include "CommunicationAward.h"
#include "Team.h"

class QuizCompetition : public Competition {
protected:
    CommunicationAward communicationAward;
    string questions[10];
    int aswers[10];

public:
    //Constructiors
    QuizCompetition():Competition();
    QuizCompetition(int id, string name, CommunicationAward award);
    //Destructor
    ~QuizCompetition(){cout << "Competitions " << name << "just ended" << endl;}

    //Setters
    void setComunicationAward(CommunicationAward award){communicationAward = award}
    void setQuestion(int i, string q){questions[i] = q;}
    void setAnswer(int i, int a){answers[i] = a;}
    void setQuestions(string qs[10]){for(int i=0;i<10;i++)setQuestion(i, qs[i]);}
    void setAnswers(int ans[10]){for(int i=0;i<10;i++)setAnswer(i, ans[i]);}

    //Getters


    int compete(Team &team1, Team &team2);
}

#endif // QUIZCOMPETITION_H_INCLUDED
