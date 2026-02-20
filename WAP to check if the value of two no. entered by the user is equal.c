#include <stdio.h>
#include <math.h>
int main() {
    float a,b;
    printf("Enter the two numbers:\n");
    scanf("%f%f",&a,&b);
    if(a==b){
        printf("The two numbers are equal");
    }
    else {
        printf("The two numbers are not equal");
    }
    return 0;
}
