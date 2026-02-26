#ifndef PLANET_H
#define PLANET_H

#include <raylib.h>
#include <raymath.h>
#include <stdbool.h>

#define GET_PLANET_P(_node_p) ((struct planet*)_node_p->element)
#define GET_PLANET(_node) ((struct planet*)_node->element)

struct planet {
    Vector2 position;
    Vector2 velocity;
    float mass;
    float radius;
    Color color;
    bool immovable;
};

void render_planet(struct planet *p);
void update_planet(struct planet *p, float dt);
void apply_force(struct planet *p, Vector2 f, float dt);

Vector2 calculate_gravitational_force(struct planet *p1, struct planet *p2);

#endif
