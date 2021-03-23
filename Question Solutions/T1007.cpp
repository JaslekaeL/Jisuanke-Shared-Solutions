//T1007：将一个整型变量的值赋给一个布尔型变量，再将这个布尔型变量的值赋给一个整型变量，输出它的值。
//注意：bool是C++中的关键字，在C语言中不受支持，所以在C99标准中引入了头文件stdbool.h，该文件包含了四个用于布尔型的预定义宏
#include <stdio.h>
#include <stdbool.h>
int main(){
    int a;
    bool b;
    scanf("%d", &a);
    b=a;
    printf("%d", b);
    return 0;
}
