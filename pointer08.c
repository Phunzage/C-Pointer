# include <stdio.h>

int main(void) {
    char C1[4];
    C1[0] = 'j';
    C1[1] = 'o';
    C1[2] = 'h';
    C1[3] = 'n';
    printf("%s\n", C1);
    char C[5];
    C[0] = 'j';
    C[1] = 'o';
    C[2] = 'h';
    C[3] = 'n';
    printf("%s", C);
}

/*
john�\�
john
*/