#include <stdio.h>

int main() {
    int n,i,j,larg;
    printf("Enter the no. of elements in the array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    larg=a[0];
    for(j=0;j<n;j++){
        if(a[j]>larg){
            larg=a[j];
        }
    }
    printf("Largest element is: %d",larg);
    return 0;
}