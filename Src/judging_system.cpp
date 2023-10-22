//
// Created by wfrfred on Oct.22 2023
//

#include "../Inc/judging_system.h"

#include <iostream>

int loop(JudgingSystem* judgingSystem) {
    judgingSystem->time++;
    hitDetect(judgingSystem);
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

inline void hitDetect(JudgingSystem* judgingSystem) {
    if (judgingSystem->table->element == NULL) {
        return;
    }
    while (judgingSystem->table->element->time == judgingSystem->time) {
        for (;;) {
            //TODO
        }
        judgingSystem->table = (judgingSystem->table);
    }
}

inline float getDistance(TargetPoint* targetPoint, Robot* robot) {
    float x1 = targetPoint->target_x;
    float x2 = robot->pos->x;
    float y1 = targetPoint->target_y;
    float y2 = robot->pos->y;

    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}