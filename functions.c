#include <stdio.h>
#include <stdlib.h>

#include "functions.h"

void print_list(struct node * list) {
    struct node * current = list;
    printf("[ ")
    while (current != NULL) {
        printf("%d ", current->val);
        current = current->next;
    }
    printf("]\n")

}

struct node * insert_front(struct node * list, int val) {
    struct node * new_node = calloc(sizeof(struct node));
    new_node->val = val;
    new_node->next = list;
    return new_node;
}

struct node * free_list(struct node * list) {
    struct node * current = list;
    struct node * next = current;
    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
    return list;
}

struct node * remove_node(struct node *front, int data) {
    if (front == NULL) {
        return front;
    }
    if (front->val == data) {
        struct node *temp = front->next;
        free(front);
        return temp;
    }
    struct node * current = front;
    while (current != NULL) {
        if (current->next == data) {
            free(current->next);
            current->next = current->next->next;
        }
    }
    return front;
}
