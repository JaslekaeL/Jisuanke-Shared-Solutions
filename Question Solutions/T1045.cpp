//T1045：输入三个正整数，分别表示三条线段的长度，判断这三条线段能否构成一个三角形。
#include <stdio.h>
#include <stdlib.h>
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a + b > c && a + c > b && b + c > a)
        printf("yes");
    else printf("no");
    return 0;
}
