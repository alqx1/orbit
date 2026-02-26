#ifndef VECTOR_UTILS_H
#define VECTOR_UTILS_H

#include <raylib.h>
#include <math.h>

static inline Vector2 negate(Vector2 v) {
    return (Vector2) {
        .x = -v.x,
        .y = -v.y,
    };
}

static inline Vector2 sub(Vector2 v1, Vector2 v2) {
    return (Vector2){
        .x = v1.x - v2.x,
        .y = v1.y - v2.y,
    };
}

static inline Vector2 add(Vector2 v1, Vector2 v2) {
    return (Vector2){
        .x = v1.x + v2.x,
        .y = v1.y + v2.y,
    };
}

static inline Vector2 mult(Vector2 v, float scalar) {
    return (Vector2) {
        .x = scalar * v.x,
        .y = scalar * v.y,
    };
}

static inline float magnitude_square(Vector2 v) {
    return v.x * v.x + v.y * v.y;
}

static inline float magnitude(Vector2 v) {
    return sqrtf(magnitude_square(v));
}

static inline Vector2 normal(Vector2 v) {
    float mag = magnitude(v);
    if (mag < 1e-8f) {
        return (Vector2){0};
    }

    float inv = 1.f / mag;
    return (Vector2){
        .x = v.x * inv,
        .y = v.y * inv,
    };
}

#endif
