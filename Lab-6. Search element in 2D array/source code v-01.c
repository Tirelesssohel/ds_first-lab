
#include <stdio.h>
#include <stdlib.h>

int main(){
    int row, col, i, j, item;
    printf("Enter the number of row and column: ");
    scanf("%d %d", &row, &col);

    int arr[row][col];
    printf("\nEnter %d array items: ", row*col);

    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nEnter search item: ");
    scanf("%d", &item);

    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            if(arr[i][j] == item){
                printf("\n%d is found at index \[%d\]\[%d\]\n", item, i, j);
                exit(0);
            }
        }
    }

    if(i == row){
        printf("\n%d is not found\n", item);
    }

return 0;
}
