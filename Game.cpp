//
// Created by Артемий Касьяник on 27.05.2022.
//

#include "Game.h"
#include <iostream>

Game::Game() : rock_count(8) {
    std::cout << "game generated.\n";
}

void Game::play() {
    int p_move, c_move;
    while (rock_count >= 0) {
        print_rock_count();
        print_how_much_to_take();
        std::cin >> p_move;
        while(!isInputCorrect(p_move)) {
            print_how_much_to_take();
            std::cin >> p_move;
        }
        rock_count -= p_move;
        if(rock_count == 0) {
            print_win();
            return;
        }
        c_move = 4 - p_move;
        rock_count -= c_move;
        print_c_took();
        std::cout << c_move << std::endl;
        if( rock_count == 0) {
            print_lost();
            return;
        }
    }
}

Game::Game(const int &n) : rock_count(n) {
    printf("game with %i rocks generated.\n", rock_count);
}

bool Game::isInputCorrect(const int &input) {
    return input <= 3;
}



