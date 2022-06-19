
// It will replace the all but the main string should be
// a string without space character
#include <stdio.h>
int main(){

    char mainString[100];
    int size, i, j, k, startIndex = 0;

    printf("Enter main string: ");
    scanf("%s", mainString);

    printf("Enter pattern string size: ");
    scanf("%d", &size);

    char patString[size+1], repString[size+1];

    printf("Enter pattern string: ");
    scanf("%s", patString);
    printf("Enter replacement string: ");
    scanf("%s", repString);

    for(i = 0; i < 100; i++){
        if(mainString[i] == patString[0]){
            for(j = i+1; j < i + size; j++){
                if(mainString[j] == patString[j-i]){
                    startIndex++;
                }
            }
            if(startIndex == size-1){
                for(j = i; j < i+size; j++){
                    mainString[j] = repString[j-i];
                }
                startIndex = 0;
            }

        }
    }
    printf("%s\n", mainString);
return 0;
}
