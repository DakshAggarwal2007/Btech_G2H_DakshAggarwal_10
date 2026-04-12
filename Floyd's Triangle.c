#include <stdio.h>

int main() {
    int row,i,j,s=1;
    printf("Enter the number of rows:");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
            printf("%d",s);
            s+=1;
        }
        printf("\n");
    }
    return 0;
}
