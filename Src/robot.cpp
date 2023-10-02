//
// Created by yixin on 2023/10/2.
//

#include "../Inc/robot.h"

RobotPos* moveRobot(RobotPos *pos, float dx, float dy){
    pos->x = pos->x + dx;
    pos->y = pos->y + dy;
    return pos;
}
