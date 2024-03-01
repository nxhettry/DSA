#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
};

//required items
typedef struct node aType;
aType *head = NULL, *newNode, *temp;

//function to insert
void insert (int x) {
    newNode = (aType *)malloc(sizeof(aType));
    newNode -> data = x;
    newNode->next = head;
    head = newNode;
    printf("Insert successfull\n");
}

//function to delete
void delete () {
    if(head == NULL) {
        printf("The list is empty !!!\n");
    } else {
        temp = head;
        head = temp->next;
        free(temp);
        printf("\nDelete successfull\n");

    }
}

//function to display
void display () {
    temp = head;
    while(temp != NULL) {
        printf("%d\t\t", temp->data);
        temp = temp->next;
    }
}

//main Function
int main(){
    insert(40);
    insert(30);
    insert(20);
    insert(10);
    display();
    delete();
    display();
    return 0;
}