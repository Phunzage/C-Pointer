# include <stdio.h>

int main(void) {
    int a = 5;
    int* p = &a;
    *p = 6;
    printf("%d\n", a);
    printf("%d\n", &a);
    printf("%d\n", p);
    printf("%d\n", p + 1);  //int类型的指针占四个字节，此处p + 1是下一个int类型指针的首地址，即相差4个字节
}

/*
6
6422036
6422036
6422040
*/