#include <iostream>
#include <cstdlib>
#include <ctime>

// Function to advance a horse
void advance(int horseNum, int* horses) {
    // Flip a coin (0 for tails, 1 for heads)
    int coin = rand() % 2;
    
    // If the coin lands on heads, move the horse forward
    if (coin == 1) {
        horses[horseNum]++;
    }
}

// Function to print a lane
void printLane(int horseNum, int* horses) {
    // Print dots for the empty spaces
    for (int i = 0; i < horses[horseNum]; i++) {
        std::cout << ".";
    }
    
    // Print the horse number
    std::cout << horseNum;
    
    // Print dots for the remaining spaces
    for (int i = horses[horseNum] + 1; i <= 15; i++) {
        std::cout << ".";
    }
    
    std::cout << std::endl;
}

// Function to check if a horse has won
bool isWinner(int horseNum, int* horses) {
    // If the horse has reached the end of the track, it has won
    return horses[horseNum] >= 15;
}

int main() {
    // Initialize the random number generator
    srand(time(NULL));
    
    // Initialize the horse positions
    int horses[5] = {0, 0, 0, 0, 0};
    
    // Main loop
    while (true) {
        // Print the current state of the track
        for (int i = 0; i < 5; i++) {
            printLane(i, horses);
        }
        
        // Check if any horse has won
        bool winner = false;
        for (int i = 0; i < 5; i++) {
            if (isWinner(i, horses)) {
                winner = true;
                break;
            }
        }
        
        // If a horse has won, print the final state of the track and exit
        if (winner) {
            for (int i = 0; i < 5; i++) {
                printLane(i, horses);
            }
            for (int i = 0; i < 5; i++) {
                if (isWinner(i, horses)) {
                    std::cout << "Horse " << i << " WINS!!!" << std::endl;
                }
            }
            break;
        }
        
        // Advance each horse
        for (int i = 0; i < 5; i++) {
            advance(i, horses);
        }
        
        // Wait for the user to press enter
        std::cout << "Press enter for another turn" << std::endl;
        std::cin.get();
    }
    
    return 0;
}

