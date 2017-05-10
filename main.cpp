#include <iostream>
#include <string>
#include "Team.h"
//#include "TeamCompetition.h"

using namespace std;

Team teams[2] = { Team("Diasimoi"), Team("Maxites")};
int competitionId = 0;
void testAwards();
void menu();
void normalDay();
void teamCompetitionDay();
void quizDay();

int main()
{
    menu();

    return 0;
}

void menu()
{
    int choice = -1;

    while(choice != 0)
    {
        cout << "1.Normal Day." << endl;
        cout << "2.Team Competition Day." << endl;
        cout << "3.Quiz Day." << endl;
        cout << "0.Quit" << endl;

        cin >> choice;

        switch(choice)
        {

        case 1:
            normalDay();
            break;
        case 2:
            teamCompetitionDay();
            break;
        case 3:
            quizDay();
            break;
        case 0:
            break;
        default:
            cout << "Incorrect Input. Choose between 1 and 3. Press 0 to quit." << endl;

        }
    }
}

void normalDay()
{

    cout << "This is a normal day in the Survivor Game." << endl << endl;

   // TODO Fill this Up!!!

}

void teamCompetitionDay()
{
    cout << "This is a team competition day in the Survivor Game." << endl << endl;

    // TODO Fill this Up!!!

}

void quizDay()
{

    cout << "This is a quiz day in the Survivor Game." << endl << endl;

    // TODO Fill this Up!!!

}
