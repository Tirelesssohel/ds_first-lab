
// C program to find the largest element
// Here array size is 5
#include <stdio.h>
int main(){
    int arr[5], i, largestElement;
    printf("Enter 5 integer : ");
    for(i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }
    largestElement = arr[0];

    for(i = 1; i < 5; i++){
        if(arr[i] > largestElement){
            largestElement = arr[i];
        }
    }
    printf("Largest element is = %d\n", largestElement);

return 0;
}
