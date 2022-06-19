// this program will create an array of size 10
// For more size just change the SIZE to the expected size
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define SIZE 10

int arr[SIZE], i, option, isCreated = 0, insIndex, insItem, delItem, delIndex;

void create(){
    isCreated = 1;
    printf("Enter %d elements\n", SIZE);
    for(i = 0; i < SIZE; i++){
        scanf("%d", &arr[i]);
    }
    printf("\nArray created successfully\n");
}

void display(){
    if(isCreated == 1){
        printf("\nThe present array is: \n");
        for(i = 0; i < SIZE; i++){
            printf("%d ", arr[i]);
        }
    }else{
        printf("\nYou have not created an array yet\n");
    }
}

void insert(){
    if(isCreated == 1){
        printf("Enter the position and item: ");
        scanf("%d %d", &insIndex, &insItem);

        for(i = SIZE-2; i >= insIndex; i--){
            arr[i+1] = arr[i];
        }
        arr[insIndex] = insItem;
        printf("Item inserted successfully\n");
    }else{
        printf("\nYou have not created an array yet\n");
    }
}

bool isPresent(int a){
    for(i = 0; i < SIZE; i++){
        if(arr[i] == delItem){
            delIndex = i;
            return true;
        }
    }
    if(i == SIZE){
        printf("Item not present\n");
        return false;
    }
}

void del(){
    if(isCreated == 1){
        printf("Enter the item to delete: ");
        scanf("%d", &delItem);
        if(isPresent(delItem)){
            arr[delIndex] = 0;
            for(i = delIndex; i < SIZE-1; i++){
                arr[i] = arr[i+1];
            }
            printf("Item deleted successfully\n");
        }

    }else{
        printf("\nYou have not created an array yet\n");
    }
}

int main(){
    while(1){
        printf("\n\n1. Create array\n");
        printf("2. Display array\n");
        printf("3. Insert element\n");
        printf("4. Delete element\n");
        printf("5. Exit\n");
        printf("\nSelect the operation\n");
        scanf("%d", &option);

        switch(option){

        case 1:{
            create();
            break;
        }

        case 2:{
            display();
            break;
        }

        case 3:{
            insert();
            break;
        }

        case 4:{
            del();
            break;
        }

        default:{
            printf("Thanks and bye!\n");
            exit(0);
        }
      }
    }
return 0;
}
