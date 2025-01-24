# include <stdio.h>
/*错误写法
void Increment(int a) {
    a = a + 1;
}
int main(void) {
    int a = 10;
    Increment(a);
    printf("调用函数之后a = %d", a);    //此处a = 10
}

*/

//正确写法
int Interment(int* p) {
    *p = *p + 1;
}

int main(void) {
    int a = 10;
    int* p = &a;
    Interment(p);
    printf("调用函数之后a = %d\n", a);    //此处a = 11
}

