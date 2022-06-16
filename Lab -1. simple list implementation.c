
// This program will search the given item
// then it will delete the item if found
// Otherwise it will show a message that item does not found
// List size is 10 here
#include <stdio.h>
#include <stdbool.h>
#define SIZE 10

int i, list[SIZE], item, existIndex, notFound = 0;

bool isExist(int b){
    for(i = 0; i < SIZE; i++){
        if(list[i] == item){
            existIndex = i;
            return true;
        }
    }
    if(i == 10){
        printf("\nItem does not exist\n\n");
        notFound = 1;
        return false;
    }
}

void deleteItem(int a){
    if(isExist(a)){
        list[existIndex] = NULL;
    }
}

int main(){
    printf("Enter %d integers of the list: ", SIZE);
    for(i = 0; i < SIZE; i++){
        scanf("%d", &list[i]);
    }
    printf("\nEnter which item you want to delete: ");
    scanf("%d", &item);
    deleteItem(item);

    // printing list after deleting
    if(!notFound){
        printf("\nList after delete item: ");
        for(i = 0; i < SIZE; i++){
            printf("%d ", list[i]);
        }
    }

return 0;
}
