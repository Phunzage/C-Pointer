# include <stdio.h>

int main(void) {
    printf("hello, pointer\n");
    int* pointer;
    
    int a;
    int* p;
    p = &a;
    a = 5;

    printf("%d\n", sizeof(pointer));
    printf("%d\n", p);
    printf("%d\n", &a);
    printf("%d\n", a);
    printf("%d", *p);
    return 0;
}

/*
hello, pointer
8
6422036
6422036
5
5
*/