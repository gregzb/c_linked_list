#include <stdio.h>
#include <stdlib.h>

#include "functions.h"

int main() {
    struct node * my_list = NULL;
    my_list = insert_front(my_list, 4);
    my_list = insert_front(my_list, -1234);
    my_list = insert_front(my_list, 612);
    my_list = insert_front(my_list, 324234);
    my_list = insert_front(my_list, -234234);
    my_list = insert_front(my_list, 100);
    print_list(my_list);
    free_list(my_list);

    return 0;
}
