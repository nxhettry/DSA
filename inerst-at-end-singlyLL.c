#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
};

//required items
typedef struct node aType;
aType *head = NULL, *newNode, *temp, *p;

//function to insert
void insert (int x) {
    newNode = (aType *)malloc(sizeof(aType));
    if(temp->next != NULL) {
        //here temp reaches to the last node
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->data = x;
    newNode->next = NULL;
    printf("Insert successfull\n");
}

//function to delete
void delete () {
    if(head == NULL) {
        printf("The list is empty !!!\n");
    } else {
        temp = head;
        if (temp->next->next != NULL) {
        //here temp reaches to the second last node
            temp = temp->next;
        }
        p = temp->next;
        free(p);
        temp->next = NULL;
        
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
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    display();
    delete();
    display();
    return 0;
}