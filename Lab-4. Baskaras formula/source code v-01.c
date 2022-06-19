
// program to find root of quadratic equation
// Using baskaras formulae
#include <stdio.h>
#include <math.h>
int main(){
    float a, b, c, x, y, d;
    printf("Find root using Baskaras Formulae\n");
    printf("Enter the value of a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);
    d = (b*b) - (4*a*c);
    if(a == 0)printf("\nImpossible calcular\n");
    else if(d < 0) printf("Impossible calcular\n");
    else{
        x = (-b+sqrt(d))/(2*a);
        y = (-b-sqrt(d))/(2*a);

        printf("\nFirst Root : %.2f\n", x);
        printf("Second Root: %.2f\n", y);
    }
return 0;
}
