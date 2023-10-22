//
// Created by yixin on 2023/10/2.
//

#include "../Inc/main.h"

#include "../Inc/judging_system.h"
#include "../Inc/robot.h"

int main() {
    Robot group_r[4];
    Robot group_b[4];

    JudgingSystem judgingSystem;

    judgingSystem.base_b->hp->max_hp = 2000;
    judgingSystem.base_r->hp->max_hp = 2000;
    judgingSystem.base_b->hp->hp = 2000;
    judgingSystem.base_r->hp->hp = 2000;
    judgingSystem.base_b->pos->x = 5;
    judgingSystem.base_b->pos->y = 0;
    judgingSystem.base_r->pos->x = 5;
    judgingSystem.base_r->pos->y = 10;

    judgingSystem.base_r = 0;
    judgingSystem.table = createNode(NULL, NULL);

    for (int i = 0; i <= 4; ++i) {
        group_b[i].hp->max_hp = 200;
        group_b[i].hp->hp = 200;
        group_b[i].pos->pitch = 0;
        group_b[i].pos->x = 0;
        group_b[i].pos->y = 0;
        group_b[i].pos->yaw = 0;
        group_b[i].shoot_args->muzzleVelocity = 10;
        group_b[i].uuid = (long)&group_b[i];
        judgingSystem.group_b[i] = &group_b[i];
    }

    for (int i = 0; i <= 4; ++i) {
        group_r[i].hp->max_hp = 200;
        group_r[i].hp->hp = 200;
        group_r[i].pos->pitch = 0;
        group_r[i].pos->x = 10;
        group_r[i].pos->y = 10;
        group_r[i].pos->yaw = 0;
        group_r[i].shoot_args->muzzleVelocity = 10;
        group_r[i].uuid = (long)&group_r[i];
        judgingSystem.group_r[i] = &group_r[i];
    }

    while (loop(&judgingSystem)) {
        
    }

    return 0;
}
