#include <stdio.h> 
int main(){
    int b,h;
    float at;

    printf("Enter  value of height of triangle ");
    scanf("%d",&h);

    printf("Enter value of base of triangle ");
    scanf("%d",&b);

    at = 0.5*h*b;

    printf("Area of triangle having base %d and height %d is %f ",b,h,at);








    return 0;
}