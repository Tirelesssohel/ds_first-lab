
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define CAPACITY 10

int queue[CAPACITY];
int front = 0; rear = -1; totalElement = 0, i;

bool isEmpty(){
    if(totalElement == 0){
        return true;
    }
    return false;
}

bool isFull(){
    if(totalElement == CAPACITY){
        return true;
    }
    return false;
}

void enqueue(int element){
    if(isFull()){
        printf("Queue is Full\n");
    }else{
        rear = (rear+1) % CAPACITY;
        queue[rear] = element;
        totalElement++;
        printf("Element added successfully\n");
    }
}

void dequeue(){
    if(isEmpty()){
        printf("Queue is Empty\n");
    }else{
        front = (front + 1) % CAPACITY;
        totalElement--;
        printf("Element deleted successful\n");
    }
}

void displayQueue(){
    if(isEmpty()){
        printf("Queue is Empty\n");
    }else{
        for(i = 0; i < totalElement; i++){
            printf("%d ", queue[(front + i) % CAPACITY]);
        }
    }
}
int main(){
    while(1){
        int option, item;
        printf("\n\nWhat you want to do?\n\n");
        printf("1. Insert element\n");
        printf("2. Delete element\n");
        printf("3. Display the circular queue\n");
        printf("4. Exit\n");
        printf("\nSelect the option: \n");
        scanf("%d", &option);
        switch(option){
        case 1:{
                printf("Enter the element: ");
                scanf("%d", &item);
                enqueue(item);
                break;

            }
        case 2:{
                dequeue();
                break;
        }
        case 3:{
                displayQueue();
                break;
        }
        default:{
                printf("\nThank you! Bye!\n\n");
                exit(0);
        }
      }
    }
return 0;
}
