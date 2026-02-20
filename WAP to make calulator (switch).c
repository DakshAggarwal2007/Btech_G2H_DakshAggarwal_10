#include <stdio.h>
#include <math.h>
int main() {
    float a,b;
    char c;
    printf("Enter the operation");
    scanf("%f%c%f",&a,&c,&b);

   switch(c){
       case '+':
       printf("Ans: %f",a+b);
       break;
       case '-':
       printf("Ans: %f",a-b);
       break;
       case '*':
       printf("Ans: %f",a*b);
       break;
       case '/':
       printf("Ans: %f",a/b);
       break;
       default:
       printf("Enter a valid operation");
   }
    return 0;
}
