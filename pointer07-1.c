//练习：写一个函数，传入一个数组，数组乘二后传出
# include <stdio.h>

void arraytwo(int* a) {
    for(int i = 0; i < 5; i++) {
        a[i] = a[i] * 2;
    }
}

int main(void) {
    int a[5] = {1, 2, 3, 4, 5};
    arraytwo(a);
    for(int i = 0; i < 5; i++) {
        printf("%d\t", a[i]);
    }
}