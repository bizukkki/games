#include <iostream>
using namespace std;

int geom();
int nokgame();
int prime();

int main() {
    srand(time(NULL));

    string name;

    cout << "Welcome to the Brain Game!\nMay I have your name?\n";
    cin >> name;
    cout << "Hello, " << name << "!\n";
    
    while (1) {
        int a;
        cout << "\nChoose game: 1 - nok, 2 - geometric prodression, 3 - prime number, other - stop all games\n";
        cin >> a;

        int rightanswer;
        if (a == 1)
            rightanswer = nokgame();
        else if (a == 2)
            rightanswer = geom();
        else if (a == 3)
            rightanswer = prime();
        else
            break;

        cout << "Your answer: ";
        int playeranswer;
        cin >> playeranswer;
        if (playeranswer == rightanswer)
            cout << "Correct!\nCongratulations, " << name << "!\n";
        else
            cout << "'" << playeranswer << "' is wrong answer. Correct answer was '" << rightanswer << "'. Let's try again, " << name << "!\n";
    }
}