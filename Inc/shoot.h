//
// created by wfrfred on Oct.21 2023
//

#ifndef SHOOT_H
#define SHOOT_H

#define _USE_MATH_DEFINES

#include <math.h>
#include <robot.h>

struct TargetPoint {
    int time;
    Robot* source;
    float target_x;
    float target_y;
};

//
// @brief 射击函数
// @param shooter 射击者
// @param targetPoint 用于返回的射击落点
//
void shoot(Robot* shooter, TargetPoint* targetPoint, JudgingSystem* judgingSystem);

struct Node {
    TargetPoint* element;
    struct Node* next;
};

Node* createNode(TargetPoint* element, Node* next);

void addNode(TargetPoint* element, Node* table);

Node* dropHead(Node* table);
#endif