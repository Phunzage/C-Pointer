# include <stdio.h>

int array(int *a, int size) {        //这里int *a 可以写成 int a[]
    int sum = 0;
    printf("in array, size of a = %d, size of a[0] = %d\n", sizeof(a), sizeof(a[0]));
    for(int i = 0; i < size; i++) {
        sum += a[i];        //a[i] = *(a + i), 是对应的数组的值
    }
    return sum;
}

int main(void) {
    int a[5] = {1, 2, 3, 4, 5};
    int size = sizeof(a) / sizeof(a[0]);
    int total = array(a, size);
    printf("sum = %d\n", total);
    //这里64位系统，sizeof(a)是 8 位
    printf("in main, size of a = %d, size of a[0] = %d\n", sizeof(a), sizeof(a[0]));
}

/*
in array, size of a = 8, size of a[0] = 4
sum = 15
in main, size of a = 20, size of a[0] = 4
*/