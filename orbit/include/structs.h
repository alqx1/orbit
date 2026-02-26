#ifndef STRUCTS_H
#define STRUCTS_H

#include <raymath.h>

#include "linked_list.h"

struct force {
    Vector2 direction;
    Vector2 position;
    float magnitude;
};
struct state {
    struct node *planet_head;
};

#endif
