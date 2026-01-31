#include <iostream>
using namespace std;

int main() {
    char board[3][3];
    char p;
    int r, c;
    int count;
    char ch;

    do {
        // board setup
        count = 0;
        p = 'X';

        board[0][0] = ' ';
        board[0][1] = ' ';
        board[0][2] = ' ';
        board[1][0] = ' ';
        board[1][1] = ' ';
        board[1][2] = ' ';
        board[2][0] = ' ';
        board[2][1] = ' ';
        board[2][2] = ' ';

        while (1) {
            // show board
            cout << "\nTic Tac Toe\n";
            cout << "-------------\n";
            cout << "| " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << " |\n";
            cout << "-------------\n";
            cout << "| " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << " |\n";
            cout << "-------------\n";
            cout << "| " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << " |\n";
            cout << "-------------\n";

            cout << "Player " << p << " enter row and column (0 1 2): ";
            cin >> r >> c;

            if (board[r][c] != ' ') {
                cout << "Already filled, try again\n";
                continue;
            }

            board[r][c] = p;
            count++;

            // win check (simple way)
            if (
                (board[0][0] == p && board[0][1] == p && board[0][2] == p) ||
                (board[1][0] == p && board[1][1] == p && board[1][2] == p) ||
                (board[2][0] == p && board[2][1] == p && board[2][2] == p) ||
                (board[0][0] == p && board[1][0] == p && board[2][0] == p) ||
                (board[0][1] == p && board[1][1] == p && board[2][1] == p) ||
                (board[0][2] == p && board[1][2] == p && board[2][2] == p) ||
                (board[0][0] == p && board[1][1] == p && board[2][2] == p) ||
                (board[0][2] == p && board[1][1] == p && board[2][0] == p)
               ) {
                cout << "\nPlayer " << p << " won the game\n";
                break;
            }

            if (count == 9) {
                cout << "\nGame draw\n";
                break;
            }

            // change player
            if (p == 'X')
                p = 'O';
            else
                p = 'X';
        }

        cout << "Play again? (y/n): ";
        cin >> ch;

    } while (ch == 'y' || ch == 'Y');

    return 0;
}
