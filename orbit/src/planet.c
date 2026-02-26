#include "planet.h"
#include <stdio.h>
#include "utils/vector_utils.h"

#define GRAV_CONSTANT (1000)

void render_planet(struct planet *p) {
    DrawCircleV(p->position, p->radius, WHITE);
}

void update_planet(struct planet *p, float dt) {
    if (!p->immovable) {
        p->position.x += p->velocity.x * dt;
        p->position.y += p->velocity.y * dt;
    }
}

void apply_force(struct planet *p, Vector2 f, float dt) {
    p->velocity.x += dt * f.x / p->mass;
    p->velocity.y += dt * f.y / p->mass;
}

Vector2 calculate_gravitational_force(struct planet *p1, struct planet *p2) {
    Vector2 dist = sub(p1->position, p2->position);
    float mag = magnitude_square(dist);

    if (mag < 100.f) {
        mag = 100.f;
    }

    Vector2 dir = normal(dist);

    float inv = 1.f / magnitude_square(dist);
    float scalar = -GRAV_CONSTANT * p1->mass * p2->mass * inv;

    return mult(dir, scalar);
}
