//The following code is a simple game logic written in C++

#include <iostream>

using namespace std;

int main()
{
    int score = 0; // score for player
    int move; // move for player

    cout << "Welcome to the game!" << endl;

    while (true)
    {
        cout << "Make your move: ";
        cin >> move; // the player makes their move

        // check the move and update the score accordingly
        if (move == 1)
            score += 10;
        else if (move == 2)
            score += 20;
        else if (move == 3)
            score += 30;
        else if (move == 4)
            score += 40;
        else if (move == 5)
            score += 50;
        else
            cout << "Invalid move!" << endl;

        cout << "Your score is: " << score << endl;

        // check if the game is over
        if (score >= 100)
        {
            cout << "Congratulations, you won!" << endl;
            break;
        }
    }

    return 0;
}
