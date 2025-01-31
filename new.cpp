#include <iostream>
#include <cstdlib>
#include <ctime>

const int NUM_HORSES = 5;
const int TRACK_LENGTH = 15;

void advance(int horseNum, int* horses) {
    if (rand() % 2 == 1) {
        horses[horseNum]++;
    }
}

void printLane(int horseNum, int* horses) {
    for (int i = 0; i < TRACK_LENGTH; i++) {
        if (i == horses[horseNum]) {
            std::cout << horseNum;
        } else {
            std::cout << '.';
        }
    }
    std::cout << std::endl;
}

bool isWinner(int horseNum, int* horses) {
    return horses[horseNum] >= TRACK_LENGTH - 1;
}

int main() {
    srand(time(0));
    int horses[NUM_HORSES] = {0};
    bool raceOver = false;

    while (!raceOver) {
        for (int i = 0; i < NUM_HORSES; i++) {
            advance(i, horses);
            printLane(i, horses);
            if (isWinner(i, horses)) {
                raceOver = true;
            }
        }

        if (!raceOver) {
            std::cout << "Press Enter for another turn...";
            std::cin.get();
        }
    }

    for (int i = 0; i < NUM_HORSES; i++) {
        if (isWinner(i, horses)) {
            std::cout << "Horse " << i << " WINS!!!\n";
        }
    }
    return 0;
}
