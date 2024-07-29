// Q.1 ----->  Perimeter of rectangle = length + length + width + width
# include<stdio.h>
int main(){
    float length;
    printf("enter length");
    scanf("%f",&length);

    float width;
    printf("enter width");
    scanf("%f",&width);

    printf("perimeter of rectangle is : %f" , 2*(length+width));
    return 0;
}

// Q.2 -----> Take a number(n) from user & output its cube(n*n*n).

#include<stdio.h>
int main () {
    int n ;
    printf("enter value of n");
    scanf("%d",&n);

    printf("cube is : %d ", n*n*n);
    return 0;
}


