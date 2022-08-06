// still there is some error

#include <stdio.h>
#include <string.h>
#define SIZE 10

char stack[SIZE], sentence[20];
int i, len, top = -1;

void push(char ch){
    if(top > SIZE-2){
        printf("Stack is full\n");
    }else{
        top++;
        stack[top] = ch;
    }
}

void popTillPar(){
    int temp = top;
    for(i = temp; i > -1; i--){
        if(stack[top] == '('){
            top--;
            break;
        }else{
            printf("%c", stack[i]);
            top--;
        }
    }
}

void operatorOperation(char ch){

    if(ch == '+' || ch == '-'){
        if(top < 0){
            push(ch);
        }else{
            int temp = top;
            for(i = temp; i > -1; i--){
                if(stack[i] == '*' || stack[i] == '/' || stack[i] == '^' || stack[i] == '+' || stack[i] == '-'){
                    printf("%c", stack[i]);
                    top--;
                }else{
                    break;
                }
            }
            push(ch);
        }
    }else if(ch == '*' || ch == '/'){
        if(top < 0){
            push(ch);
        }else{
            int t = top;
            for(i = t; i > -1; i--){
                if(stack[i] == '*' || stack[i] == '/' || stack[i] == '^'){
                    printf("%c", stack[i]);
                    top--;
                }else{
                    break;
                }
            }
            push(ch);
        }
    }else{
        if(stack[top] == '^'){
            printf("%c", stack[top]);
            top--;
            push(ch);
        }else{
            push(ch);
        }
    }
}

int main(){
    printf("Enter the expression: ");
    scanf("%s", sentence);
    len = strlen(sentence);
    for(i = 0; i < len; i++){
        if(((sentence[i] >= 'A') && (sentence[i] <= 'Z')) || ((sentence[i] >= 'a') && (sentence[i] <= 'z'))){
            printf("%c", sentence[i]);
        }else if(sentence[i] == '('){
            // opening parenthesis
            push(sentence[i]);
        }else if(sentence[i] == ')'){
            // closing paranthesis
            popTillPar();
        }else{
            // operator
            operatorOperation(sentence[i]);
        }
    }
    // stack should be empty
    for(i = top; i > -1; i--){
        printf("%c", stack[i]);
    }
return 0;
}
