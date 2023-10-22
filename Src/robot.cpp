//
// Created by yixin on 2023/10/2.
//

#include "../Inc/robot.h"

RobotPos* moveRobot(RobotPos* pos, float dx, float dy) {
    pos->x = pos->x + dx;
    pos->y = pos->y + dy;
    return pos;
}

void onHited(Robot* robot, TargetPoint* targetPoint, float buff) {
    int* hp = &(robot->hp->hp);
    *hp -= HIT * buff;
    std::cout << targetPoint->source->uuid + "has hited" + robot->uuid << std::endl;
    if (*hp <= 0) {
        *hp == 0;
        std::cout << targetPoint->source->uuid + "has killed" + robot->uuid << std::endl;
    }
}
