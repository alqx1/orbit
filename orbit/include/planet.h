#ifndef PLANET_H
#define PLANET_H

#include <raylib.h>
#include <raymath.h>

#define GET_PLANET_P(_node_p) ((struct planet*)_node_p->element)
#define GET_PLANET(_node) ((struct planet*)_node->element)

struct planet {
    Vector2 position;
    Vector2 velocity;
    float mass;
    float radius;
};

void render_planet(struct planet *p);

#endif
