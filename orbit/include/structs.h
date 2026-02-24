#ifndef STRUCTS_H
#define STRUCTS_H

#include <stdint.h>
#include "linked_list.h"

struct vec2 {
    int16_t x, y;
};

struct force {
    struct vec2 direction;
    struct vec2 position;
    float magnitude;
};

struct planet {
    struct vec2 position;
    struct vec2 velocity;
    float mass;
    float radius;
};

struct state {
    struct node planet_head;
};

#endif
