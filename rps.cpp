#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <limits>

Enum Choice {ROCK=1, PAPER, SCISSORS};

std::string choiceToString(Choice c) {
switch (c){
 case ROCK: return "Rock";
 case PAPER: return "Paper";
 case SCISSORS: return "Scissors";
}
 return "";
}

int decideWinner(Choice player, Choice computer) {
 if (player == computer) return 0;
 if ((player == ROCK && computer == SCISSORS) ||
     (player == PAPER && computer == ROCK) ||
     (player == SCISSORS && computer == PAPER)){
 return 1;
}
return -1;
}

int main() {
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    int playerScore = 0, computerScore = 0, ties = 0;
    int input;

    std::cout << "=== Rock Paper Scissors ===\n";

    while (true) {
        std::cout << "\n1) Rock\n2) Paper\n3) Scissors\n0) Quit\n";
        std::cout << "Your choice: ";

        if (!(std::cin >> input)) {
            // Handle non-numeric input
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Please enter a number from 0 to 3.\n";
            continue;
        }

        if (input == 0) break;

        if (input < 1 || input > 3) {
            std::cout << "Invalid choice. Try again.\n";
            continue;
        }

        Choice player = static_cast<Choice>(input);
        Choice computer = static_cast<Choice>(std::rand() % 3 + 1);

        std::cout << "You chose:      " << choiceToString(player) << "\n";
        std::cout << "Computer chose: " << choiceToString(computer) << "\n";

        int result = decideWinner(player, computer);
        if (result == 1) {
            std::cout << "You win this round!\n";
            ++playerScore;
        } else if (result == -1) {
            std::cout << "Computer wins this round!\n";
            ++computerScore;
        } else {
            std::cout << "It's a tie!\n";
            ++ties;
        }

        std::cout << "Score -> You: " << playerScore
                  << " | Computer: " << computerScore
                  << " | Ties: " << ties << "\n";
    }

    std::cout << "\nFinal score -> You: " << playerScore
              << " | Computer: " << computerScore
              << " | Ties: " << ties << "\n";
    std::cout << "Thanks for playing!\n";
    return 0;
}