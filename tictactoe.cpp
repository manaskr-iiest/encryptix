#include <iostream>
using namespace std;

int main() {
    int row = 3;
    int col = 3;
    char arr[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };

    char currentPlayer = 'X';
    bool flag = false;
    
    while (!flag) {

    // Display the current board
    cout << "Current board:\n";
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int rowno, colno;
    cout << "Enter coordinates (row col): ";
    cin >> rowno >> colno;

    // Check if the input coordinates are within bounds
    if (rowno < 0 || rowno >= row || colno < 0 || colno >= col) {
        cout << "Invalid coordinates. Try again.\n";
        continue;
    }

    // Check if the selected cell is already occupied
    if (arr[rowno][colno] != ' ') {
        cout << "That cell is already taken. Try again.\n";
        continue;
    }

    // Place the current player's mark on the board
    arr[rowno][colno] = currentPlayer;

    // Check for a win condition
    // Check rows
    for (int i = 0; i < row; ++i) {
        if (arr[i][0] == currentPlayer && arr[i][1] == currentPlayer && arr[i][2] == currentPlayer) {
            flag = true;
        }
    }
    // Check columns
    for (int j = 0; j < col; ++j) {
        if (arr[0][j] == currentPlayer && arr[1][j] == currentPlayer && arr[2][j] == currentPlayer) {
            flag = true;
        }
    }
    // Check diagonals
    if (arr[0][0] == currentPlayer && arr[1][1] == currentPlayer && arr[2][2] == currentPlayer) {
        flag = true;
    }
    if (arr[0][2] == currentPlayer && arr[1][1] == currentPlayer && arr[2][0] == currentPlayer) {
        flag = true;
    }

    // Switch players
    currentPlayer= (currentPlayer == 'X') ? 'O' : 'X';


// Game is over, print final board and winner
cout << "Final board:\n";
for (int i = 0; i < row; ++i) {
    for (int j = 0; j < col; ++j) {
        cout << arr[i][j] << " ";
    }
    cout << endl;
}
cout << "Player " << currentPlayer << " wins!\n";
}
