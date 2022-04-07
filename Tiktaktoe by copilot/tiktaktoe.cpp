#include <iostream>

int main()
{
    //Tik tak toe board 
    char board[3][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };

    //Player 1 and 2
    char player1 = 'X';
    char player2 = 'O';
    //Player 1 and 2 turn
    char turn = player1;
    //Game loop
    while (true)
    {
        //Print board
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                std::cout << board[i][j] << " ";
            }
            std::cout << std::endl;
        }
        //Player turn
        std::cout << "Player " << turn << " turn: ";
        int input;
        std::cin >> input;
        //Check if input is valid
        if (input < 1 || input > 9)
        {
            std::cout << "Invalid input" << std::endl;
            continue;
        }
        //Check if input is taken
        if (board[(input - 1) / 3][(input - 1) % 3] != '1' && board[(input - 1) / 3][(input - 1) % 3] != '2' && board[(input - 1) / 3][(input - 1) % 3] != '3' && board[(input - 1) / 3][(input - 1) % 3] != '4' && board[(input - 1) / 3][(input - 1) % 3] != '5' && board[(input - 1) / 3][(input - 1) % 3] != '6' && board[(input - 1) / 3][(input - 1) % 3] != '7' && board[(input - 1) / 3][(input - 1) % 3] != '8' && board[(input - 1) / 3][(input - 1) % 3] != '9')
        {
            std::cout << "Invalid input" << std::endl;
            continue;
        }
        //Check if input is taken
        if (board[(input - 1) / 3][(input - 1) % 3] == 'X' || board[(input - 1) / 3][(input - 1) % 3] == 'O')
        {
            std::cout << "Invalid input" << std::endl;
            continue;
        }
        //check if player 1 or 2 turn
        if (turn == player1)
        {
            board[(input - 1) / 3][(input - 1) % 3] = player1;
            turn = player2;
        }
        else
        {
            board[(input - 1) / 3][(input - 1) % 3] = player2;
            turn = player1;
        }
        //Check if player 1 or 2 won
        if (board[0][0] == player1 && board[0][1] == player1 && board[0][2] == player1)
        {
            std::cout << "Player " << player1 << " won!" << std::endl;
            break;
        }
        if (board[1][0] == player1 && board[1][1] == player1 && board[1][2] == player1)
        {
            std::cout << "Player " << player1 << " won!" << std::endl;
            break;
        }
        if (board[2][0] == player1 && board[2][1] == player1 && board[2][2] == player1)
        {
            std::cout << "Player " << player1 << " won!" << std::endl;
            break;
        }
        if (board[0][0] == player1 && board[1][0] == player1 && board[2][0] == player1)
        {
            std::cout << "Player " << player1 << " won!" << std::endl;
            break;
        }
        if (board[0][1] == player1 && board[1][1] == player1 && board[2][1] == player1)
        {
            std::cout << "Player " << player1 << " won!" << std::endl;
            break;
        }
        if (board[0][2] == player1 && board[1][2] == player1 && board[2][2] == player1)
        {
            std::cout << "Player " << player1 << " won!" << std::endl;
            break;
        }
        if (board[0][0] == player1 && board[1][1] == player1 && board[2][2] == player1)
        {
            std::cout << "Player " << player1 << " won!" << std::endl;
            break;
        }
        if (board[0][2] == player1 && board[1][1] == player1 && board[2][0] == player1)
        {
            std::cout << "Player " << player1 << " won!" << std::endl;
            break;
        }
        if (board[0][0] == player2 && board[0][1] == player2 && board[0][2] == player2)
        {
            std::cout << "Player " << player2 << " won!" << std::endl;
            break;
        }
        if (board[1][0] == player2 && board[1][1] == player2 && board[1][2] == player2)
        {
            std::cout << "Player " << player2 << " won!" << std::endl;
            break;
        }
        if (board[2][0] == player2 && board[2][1] == player2 && board[2][2] == player2)
        {
            std::cout << "Player " << player2 << " won!" << std::endl;
            break;
        }
        if (board[0][0] == player2 && board[1][0] == player2 && board[2][0] == player2)
        {
            std::cout << "Player " << player2 << " won!" << std::endl;
            break;
        }
        if (board[0][1] == player2 && board[1][1] == player2 && board[2][1] == player2)
        {
            std::cout << "Player " << player2 << " won!" << std::endl;
            break;
        }
        if (board[0][2] == player2 && board[1][2] == player2 && board[2][2] == player2)
        {
            std::cout << "Player " << player2 << " won!" << std::endl;
            break;
        }
        if (board[0][0] == player2 && board[1][1] == player2 && board[2][2] == player2)
        {
            std::cout << "Player " << player2 << " won!" << std::endl;
            break;
        }
        if (board[0][2] == player2 && board[1][1] == player2 && board[2][0] == player2)
        {
            std::cout << "Player " << player2 << " won!" << std::endl;
            break;
        }
        //Check if board is full
        if (board[0][0] != '1' && board[0][1] != '2' && board[0][2] != '3' && board[1][0] != '4' && board[1][1] != '5' && board[1][2] != '6' && board[2][0] != '7' && board[2][1] != '8' && board[2][2] != '9')
        {
            std::cout << "It's a draw!" << std::endl;
            break;
        }
    }
    return 0;

}