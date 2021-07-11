#include <stdio.h>

#include "func1.h"
#include "static.h"
#include "dynamic.h"

int main(char argc, char **argv){

    int a, b, c;

    printf("hello world\n");

    printf("enter two numbers to add together\n");
    printf("Number one: ");
    scanf("%d", &a);
    printf("Number two: ");
    scanf("%d", &b);

    c = adder( a, b);
    printf("Number equals %i\n", c);
    c = subber( a, b);
    printf("Number equals %i\n", c);
    c = multer( a, b);
    printf("Number equals %i\n", c);
    return 0;

}