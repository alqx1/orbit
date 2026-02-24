#include "linked_list.h"

#include <stddef.h>
#include <stdlib.h>
#include "structs.h"

void free_linked_list(struct node *head) {
    if (head->next == NULL) {
        free(head->element);
        return;
    }

    free(head->element);
    free_linked_list(head->next);
}


struct node insert_planet(struct node *head) {
    struct planet *new;
    new = malloc(sizeof(*new));

    return (struct node) {
        .element = (void *)new,
        .next = head,
    };
}
