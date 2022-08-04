#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head;

void insertFirst(){
    struct node *ptr;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    if(ptr == NULL){
        printf("\nMemory not available\n");
    }else{
        printf("\nEnter element: ");
        scanf("%d", &item);
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("\nNode inserted successfully");
    }

}

void insertLast(){
    struct node *ptr, *temp;
    int item;
    ptr = (struct node*)malloc(sizeof(struct node));
    if(ptr == NULL){
        printf("\nMemory not available\n");
    }else{
        printf("\nEnter element: ");
        scanf("%d", &item);
        ptr->data = item;
        if(head == NULL){
            ptr -> next = NULL;
            head = ptr;
            printf("\nNode inserted");
        }else{
            temp = head;
            while(temp->next != NULL){
                temp = temp -> next;
            }
            temp->next = ptr;
            ptr->next = NULL;
            printf("\nNode inserted");

        }
    }
}

void deleteFirst(){
    struct node *ptr;
    if(head == NULL){
        printf("\nList is empty\n");
    }else{
        ptr = head;
        head = ptr->next;
        free(ptr);
        printf("\nFirst node is deleted\n");
    }
}

void deleteLast(){
    struct node *ptr, *ptr1;
    if(head == NULL)    {
        printf("\nList is empty\n");
    }else if(head->next == NULL){
        head = NULL;
        free(head);
        printf("\nThe only node is deleted\n");
    }else{
        ptr = head;
        while(ptr->next != NULL){
            ptr1 = ptr;
            ptr = ptr ->next;
        }
        ptr1->next = NULL;
        free(ptr);
        printf("\nLast node is deleted\n");
    }
}

void display(){
    struct node *ptr;
    ptr = head;
    if(ptr == NULL){
        printf("\nList is empty\n");
    }else{
        printf("\nCurrent list is...\n\n");
        while (ptr!=NULL){
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
    }
}

void main(){
    int option;
    while(1){
        printf("\n\nLinked list implementation in C");
        printf("\n***********************************\n");
        printf("\n1. Insert first\n");
        printf("2. Insert last\n");
        printf("3. Delete first\n");
        printf("4. Delete last\n");
        printf("5. Display\n");
        printf("6. Exit\n");
        printf("\nSelect operation: ");
        scanf("%d",&option);
        switch(option){
            case 1:{
                insertFirst();
                break;
            }
            case 2:{
                insertLast();
                break;
            }
            case 3:{
                deleteFirst();
                break;
            }
            case 4:{
                deleteLast();
                break;
            }
            case 5:{
                display();
                break;
            }
            case 6:{
                printf("Thanks and bye\n");
                exit(0);
            }
            default:
                printf("Invalid operation\n");
        }
    }
}
