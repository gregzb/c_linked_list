#include <stdio.h>
#include <stdlib.h>

#include "functions.h"

void print_list(struct node * list) {
    struct node * current = list;
    printf("[ ");
    while (current != NULL) {
        printf("%d ", current->val);
        current = current->next;
    }
    printf("]\n");

}

struct node * insert_front(struct node * list, int val) {
    struct node * new_node = malloc(sizeof(struct node));
    new_node->val = val;
    new_node->next = list;
    return new_node;
}

struct node * free_list(struct node * list) {
    struct node * current = list;
    struct node * next = current;
    while (current != NULL) {
        next = current->next;
        printf("freeing %d\n", current->val);
        free(current);
        current = next;
    }
    return NULL;
}

struct node * remove_node(struct node *front, int data) {

    struct node * prev = NULL;
    struct node * current = front;

    while (current != NULL) {
        if (current->val == data) {
            if (prev == NULL) {
                struct node * temp = current->next;
                free(current);
                return temp;
            }
            prev->next = current->next;
            free(current);
            return front;
        }

        prev = current;
        current = current -> next;
    }

    return front;
}
