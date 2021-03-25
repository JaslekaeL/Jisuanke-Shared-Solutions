//T1020：计算分数的浮点数值。
#include <stdio.h>
int main(){
    int a, b;
    double c;
    scanf("%d %d", &a, &b);
    c=a*1.0/b;
    printf("%.9lf", c);
    return 0;
}
