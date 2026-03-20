#include <stdio.h>
#include <math.h>
int main() {
    int n,even=0,odd=0,i;
    printf("Enter the nth number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0){
            even=even+i;
        }
        else{
            odd=odd+i;
        }
    }
    printf("The sumn of odd numbers is:%d\n",odd);
    printf("The sumn of even numbers is:%d",even);
    return 0;
}
