#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;

void traverse_list(node *head){
    node *current = head;
    while(current != NULL){
        printf("%d\n", current->data);
        current = current->next;
    }
}

int main(int argc, char const *argv[])
{
    node *head = NULL;

    for(int i = 0; i < 11; i++){
        node *new_node = malloc(sizeof(node));
        new_node->data = i;
        new_node->next = head;
        head = new_node;
    }

    traverse_list(head);
    return EXIT_SUCCESS;
}
