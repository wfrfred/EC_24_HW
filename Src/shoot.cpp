//
// Created by wfrfred on Oct.21 2023
//

#include "../Inc/shoot.h"

#include "../Inc/judging_system.h"

#define g 9.8

void shoot(Robot* shooter, TargetPoint* targetPoint, JudgingSystem* judgingSystem) {
    targetPoint->source = shooter;
    float v = shooter->shoot_args->muzzleVelocity;
    float pitch = shooter->pos->pitch / 180 * M_PI;
    float yaw = shooter->pos->yaw / 180 / M_PI;

    int t = round(v * sin(pitch) / g * 1000);
    int current_time = judgingSystem->time;
    targetPoint->time = current_time + t;

    float distance = v * cos(pitch) * (t / 1000);
    targetPoint->target_x = shooter->pos->x + distance * cos(yaw);
    targetPoint->target_y = shooter->pos->y + distance * sin(yaw);
}