#include <stdio.h>

int main() {
    int n,i,j,k;
    printf("Enter the no. of elements in the array:");
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++){
        b[j]=a[j];
    }
    printf("Array B is:");
    for(j=0;j<n;j++){
        printf("%d",b[j]);
    }
    
    return 0;
}