//T1008：输入一个 ASCII 码，输出对应的字符。
#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    //强制类型转换
    printf("%c\n", (char)a);
    return 0;
}
