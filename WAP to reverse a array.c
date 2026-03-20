#include <stdio.h>

int main() {
    int n,i,j,k;
    printf("Enter the no. of elements in the array");
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++){
        b[j]=a[n-j-1];
    }
     for(k=0;k<n;k++){
        printf("%d",b[k]);
    }
   

    return 0;
}
