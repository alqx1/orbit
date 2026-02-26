#include "linked_list.h"

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

#include "planet.h"

void free_linked_list(struct node *head) {
    while (head != NULL) {
        struct node *next = head->next;
        free(head->element);
        free(head);
        head = next;
    }
}


struct node *insert_planet(struct node *head) {
    struct planet *new_planet;
    struct node *new;

    new_planet = malloc(sizeof(*new_planet));
    new = malloc(sizeof(*new));
    if (new_planet == NULL) {
        fprintf(stderr, "Malloc failed!\n");
        exit(1);
    }

    if (new == NULL) {
        free(new_planet);
        fprintf(stderr, "Malloc failed!\n");
        exit(1);
    }

    *new_planet = (struct planet){0};
    *new = (struct node) {
        .element = (void *)new_planet,
        .next = head,
    };

    return new;
}
