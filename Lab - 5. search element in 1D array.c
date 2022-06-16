
#include <stdio.h>
#include <stdbool.h>
#define SIZE 10

int i, arr[SIZE], item, foundIndex;

bool isFound(int b){
    for(i = 0; i < SIZE; i++){
        if(arr[i] == b){
            foundIndex = i;
            return true;
        }
    }
    if(i == SIZE){
        printf("\nItem not found\n");
        return false;
    }
}


int main(){
    printf("Enter %d array elements: ", SIZE);
    for(i = 0; i < SIZE; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter search item: ");
    scanf("%d", &item);

    if(isFound(item)){
        printf("\n%d is found at index %d\n", item, foundIndex);
    }
return 0;
}
