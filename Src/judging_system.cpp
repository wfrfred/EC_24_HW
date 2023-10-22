//
// Created by wfrfred on Oct.22 2023
//

#include "../Inc/judging_system.h"

#include <iostream>

int init(JudgingSystem* judgingSystem) {
    judgingSystem->time = 0;
    judgingSystem->money_b = 0;
    judgingSystem->money_r = 0;
    judgingSystem->buff_b = 0;
    judgingSystem->buff_r = 0;
}

int loop(JudgingSystem* judgingSystem) {
    judgingSystem->time++;
    if (judgingSystem->base_b->hp == 0) {
        std::cout << "Red group wins!" << std::endl;
        return 0;
    } else if (judgingSystem->base_r->hp == 0) {
        std::cout << "Blue group wins!" << std::endl;
        return 0;
    } else {
        return 1;
    };
}