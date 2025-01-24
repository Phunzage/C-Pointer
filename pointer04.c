# include <stdio.h>

int main(void) {
    int x = 5;
    int* p = &x;
    *p = 6;
    int** q = &p;
    int*** r = &q;
    printf("*p = %d\n", *p);
    printf("*q = %d\n", *q);
    printf("**q = %d\n", **q);
    printf("**r = %d\n", **r);
    printf("***r = %d\n", ***r);

    ***r = 10;
    printf("x = %d\n", x);
    **q = *p + 2;
    printf("x = %d\n", x);

}

/*
*p = 6
*q = 6422036
**q = 6
**r = 6422036
***r = 6
x = 10
x = 12
*/