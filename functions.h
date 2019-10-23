#ifndef LINKED_LIST_GREG
#define LINKED_LIST_GREG

struct node {
    int val;
    struct node * next;
};

void print_list(struct node *);

struct node * insert_front(struct node *, int);

struct node * free_list(struct node *);

#endif
