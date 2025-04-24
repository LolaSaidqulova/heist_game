#include <iostream>
#include "Player.h"
#include "Acts.h"

int main() {
    Player player;
    player.inputStats();

    std::cout << "\nYour initial stats:\n";
    player.displayStats();

    std::cout << "\n=== WELCOME TO THE HEIST GAME ===\n";

    Acts acts;
    acts.Act1(player);
    acts.Act2(player);
    acts.Act3_day1(player);
    acts.Act3_day2(player);
    acts.Act3_day3(player);

    std::cout << "\nThanks for playing!\n";
    return 0;
}
