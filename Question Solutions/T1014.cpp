//T1014：读入一个浮点数，保留三位小数输出这个浮点数。
#include <stdio.h>
int main(){
    double x, y, z;
    scanf("%lf", &x);
    printf("%.3lf", x);
    return 0;
}
