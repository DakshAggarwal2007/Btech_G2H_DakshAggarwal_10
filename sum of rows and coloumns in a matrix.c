#include <stdio.h>

int main() {
    int n,m;
    printf("Enter the no. of rows in the array:");
    scanf("%d",&n);
    printf("Enter the no. of columns in the array:");
    scanf("%d",&m);
    int a[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    for(int g=0;g<n;g++){
        int sum=0;
        for(int e=0;e<m;e++){
            sum+=a[g][e];
        }
        printf("Sum of %d row:%d\n",g+1,sum);
    }
    for(int q=0;q<m;q++){
        int sum=0;
        for(int w=0;w<n;w++){
            sum+=a[w][q];
        }
        printf("Sum of %d column:%d\n",q+1,sum);
    }
    return 0;
