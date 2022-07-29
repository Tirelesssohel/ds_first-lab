#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int stack[SIZE], option, top = -1;

void push(){
    if(top > SIZE-2){
        printf("\nStack is full!\n\n");
    }else{
        int item;
        printf("\nEnter element: ");
        scanf("%d", &item);
        stack[top+1] = item;
        top++;
        printf("\nItem added successfully\n\n");
    }

}

void pushNElement(){
    if(top > SIZE-2){
        printf("\nStack is full!\n\n");
    }else{
        int num;
        printf("\nEnter how many elements to push: ");
        scanf("%d", &num);
        if((SIZE - (top + 1)) < num){
            printf("\nYou can push max %d items now\n\n", SIZE-(top+1));
        }else{
            int i;
            top++;
            printf("\nEnter %d items: ", num);
            for(i = top; i < top+num; i++){
                scanf("%d", &stack[i]);
            }
            top = top + (num-1);
            printf("\n");
            for(i = top-(num-1); i <= top; i++){
                printf("%d ", stack[i]);
            }
            printf("Added successfully\n\n");
        }

    }
}

void pop(){
    if(top < 0){
        printf("\nStack is empty\n\n");
    }else{
        top--;
        printf("\nItem popped successfully\n\n");
    }
}

void display(){
    if(top < 0){
        printf("\nStack is empty!\n\n");
    }else{
        int i;
        printf("\nThe present stack is: \n\n");
        for(i = top; i > -1; i--){
            printf("%d\n", stack[i]);
        }
        printf("\n\n");
    }
}

int main(){
    printf("\nStack Implementation by Array\n\n");
    while(1){
        printf("1. Push\n");
        printf("2. Push n elements\n");
        printf("3. Pop\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("\nSelect Operation: ");
        scanf("%d", &option);
        switch(option){
            case 1:{
                // push
                push();
                break;
            }
            case 2:{
                // push n elements
                pushNElement();
                break;
            }
            case 3:{
                // pop
                pop();
                break;
            }
            case 4:{
                // display
                display();
                break;
            }
            case 5:{
                printf("\nThanks and Bye\n\n");
                exit(0);
            }
            default:{
                printf("\nInvalid operation!\n\n");
            }
        }
    }
return 0;
}
