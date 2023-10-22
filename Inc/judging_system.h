//
// Created by wfrfred on Oct.22 2023
//
#include <robot.h>

struct JudgingSystem {
    int time;
    int money_r;
    int money_b;
    float buff_r;
    float buff_b;

    Robot* group_r[4];
    Robot* group_b[4];

    RobotHP* base_r;
    RobotHP* base_b;
};

int loop(JudgingSystem* judgingSystem);