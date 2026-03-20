#include <stdio.h>
#include <math.h>
int main() {
    int n,a=0,b=1,i,c;
    printf("Enter the nth number:");
    scanf("%d",&n);
    printf("The Fibonacci series is \n");
    for(i=1;i<=n;i++){
        c=a+b;
        printf("%d+%d=%d\n",a,b,c);
        a=b;
        b=c;
    }
    return 0;
}
