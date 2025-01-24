# include <stdio.h>

int main(void) {
    int a[2][3] = {2, 3, 6, 4, 5, 8};
    printf("%d\n", a[0][1]);

    printf("%d\n", &a);
    printf("%d\n", &a[0]);

    //int (*p)[3] = a;
    //printf("%d", p[3]);
}