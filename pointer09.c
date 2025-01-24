//用while循环和函数实现数组的输出

# include <stdio.h>

void printElement(char* a) {
    int i = 0;
    while(a[i] != '\0') {
        printf("%c\t", a[i]);
        i++;
    }
    printf("\n");

    /*
    while(*a != '\0') {
        printf("%c\t", *a);
        a++;
    }
    printf("\n");
    */
}

int main(void) {
    char a[20] = "hello";
    printElement(a);
}

/*
h	e	l	l	o
*/