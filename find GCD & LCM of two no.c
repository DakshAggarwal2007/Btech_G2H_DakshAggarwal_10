#include <stdio.h>

int main() {
    int a,b,lcm=0,tempa,tempb;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    tempa=a;
    tempb=b;
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else {
            b=b-a;
        }
    }
    lcm=tempa*tempb/a;
    printf("GCD is %d\n",a);
    printf("LCM is %d",lcm);
    
    return 0;
}
