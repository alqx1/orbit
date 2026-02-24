#ifndef LINKED_LIST_H
#define LINKED_LIST_H

struct node {
    struct node* next;
    void *element;
};

void free_linked_list(struct node *head);

#endif
