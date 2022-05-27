//
// Created by Артемий Касьяник on 27.05.2022.
//

#ifndef UNTITLED_GAME_H
#define UNTITLED_GAME_H


#include <cstdio>

class Game {
private:
    int rock_count;
    void print_rock_count() {printf("there are %i rocks left\n", rock_count);}
    void print_how_much_to_take() { printf("how many rocks do you want to take(less than 3)\n");}
    void print_win(){printf("you won!\n");}
    void print_lost(){printf("you lost.\n");}
    void print_c_took(){printf("computer's taken rocks: ");}
public:
    Game();
    Game(const int &n);
    void play();
    bool isInputCorrect(const int &input);
};


#endif //UNTITLED_GAME_H
