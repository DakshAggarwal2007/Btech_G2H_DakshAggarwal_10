#include <stdio.h>

int main() {
    int n,i,fact=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            fact++;
        }
    }
    if (fact==2){
        printf("The numbers is prime no.");
    }
    else{
        printf("The numer is not prime");
    }
    return 0;
}
