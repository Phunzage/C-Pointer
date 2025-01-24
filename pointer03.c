# include <stdio.h>

int main(void) {
    int a = 1025;
    int* p;
    p = &a;
    printf("int类型所占字节数：%d\n", sizeof(int));
    printf("p的地址：%d, *p的值：%d\n", p, *p);
    printf("p + 1的地址：%d, *(p + 1)的地址：%d\n", p + 1, *(p + 1));
    char* p0;
    p0 = (char*)p;
    printf("char类型所占字节数：%d\n", sizeof(char));
    printf("p0的地址：%d, p0的值：%d\n", p0, *p0);
    printf("p0 + 1的地址：%d, *(p0 + 1)的地址：%d", p0 + 1, *(p0 + 1));
}

/*
int类型所占字节数：4
p的地址：6422028, *p的值：1025
p + 1的地址：6422032, *(p + 1)的地址：11427072
char类型所占字节数：1
p0的地址：6422028, p0的值：1
p0 + 1的地址：6422029, *(p0 + 1)的地址：4
*/