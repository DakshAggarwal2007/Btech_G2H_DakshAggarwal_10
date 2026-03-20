#include <stdio.h>
#include <math.h>
int main() {
    int n,fact=1,i;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("The Factorial of the number is:%d",fact);
    return 0;
}
