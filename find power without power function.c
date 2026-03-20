#include <stdio.h>

int main() {
    int n,p,i,ans=1;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Enter the power:");
    scanf("%d",&p);
    for(i=1;i<=p;i++){
        ans=ans*n;
    }
    printf("%d to the power %d is %d",n,p,ans);
    return 0;
}
