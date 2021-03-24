//T1015：读入一个浮点数，保留12位小数输出这个浮点数。
#include <stdio.h>
int main(){
    double x, y, z;
    scanf("%lf", &x);
    printf("%.12lf", x);
    return 0;
}
