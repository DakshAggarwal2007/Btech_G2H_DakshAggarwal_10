#include <stdio.h>
#include <math.h>
int main() {
    int a,b,c;
    
    printf("Enter the first side of triangle:");
    scanf("%d",&a);
    printf("Enter the second side of triangle:");
    scanf("%d",&b);
    printf("Enter the third side of triangle:");
    scanf("%d",&c);
    
    if((a+b)>c && (b+c)>a && (c+a)>b){
        printf("It is a valid triangle \n");
        if(a==b && b==c){
            printf("It is an Equilateral triangle \n");
        }
        else if(a!=b && b!=c){
            printf("It is an Scalene triangle \n");
        }
        else{
            printf("It is an Isosceles triangle \n");
        }
    }
    
    else{
        printf("It is an invalid triangle");
    }

    return 0;
}
