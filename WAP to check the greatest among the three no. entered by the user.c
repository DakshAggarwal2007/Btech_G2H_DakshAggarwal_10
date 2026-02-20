#include <stdio.h>
#include <math.h>
int main() {
    float a,b,c;
    printf("Enter the value of a:\n");
    scanf("%f",&a);
    printf("Enter the value of b:\n");
    scanf("%f",&b);
    printf("Enter the value of c:\n");
    scanf("%f",&c);
    if(a>b && a>c){
        printf("a is the greatest number");
    }
    else if(b>a && b>c) {
        printf("b is the greatest number");
    }
    else{
        printf("c is the greatest number");
    }
    return 0;
}
