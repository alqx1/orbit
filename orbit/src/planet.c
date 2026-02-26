#include "planet.h"

void render_planet(struct planet *p) {
    DrawCircleV(p->position, p->radius, WHITE);
}
