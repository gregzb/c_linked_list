#include <stdio.h>
#include <stdlib.h>

#include "functions.h"

int main() {

    printf("making list\n");
    struct node * my_list = NULL;
    printf("empty list: \n");
    print_list(my_list);

    int i;
    for (i = 0; i < 6; i++) {
        my_list = insert_front(my_list, i);
        printf("adding %i\n", i);
        print_list(my_list);
    }

    my_list = remove_node(my_list, 0);
    printf("removing 0: \n");
    print_list(my_list);

    my_list = remove_node(my_list, 2);
    printf("removing 2: \n");
    print_list(my_list);

    my_list = remove_node(my_list, 5);
    printf("removing 5: \n");
    print_list(my_list);

    my_list = remove_node(my_list, 6);
    printf("removing 6: \n");
    print_list(my_list);

    printf("freeing my list: \n");
    my_list = free_list(my_list);
    printf("freed list: %p\n", my_list);

    return 0;
}
