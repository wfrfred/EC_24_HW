//
// Created by wfrfred on Oct.21 2023
//

#include "../Inc/shoot.h"

#define g 9.8

void shoot(Robot* shooter, TargetPoint* targetPoint) {
    targetPoint->source = shooter;
    float v = shooter->shoot_args.muzzleVelocity;
    float pitch = shooter->pos.pitch / 180 * M_PI;
    float yaw = shooter->pos.yaw / 180 / M_PI;

    long t = round(v * sin(pitch) / g * 1000);
    auto current_time = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::milliseconds(t);
    targetPoint->time = current_time + duration;

    float distance = v * cos(pitch) * (t / 1000);
    targetPoint->target_x = shooter->pos.x + distance * cos(yaw);
    targetPoint->target_y = shooter->pos.y + distance * sin(yaw);
}