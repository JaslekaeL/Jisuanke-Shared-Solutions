//T1026：输入球体的半径，计算球的体积。
#include <stdio.h>
#define PI 3.14
int main(){
    double r;
    double v;
    scanf("%lf", &r);
    v = 4.0/3*r*r*r*PI;
    printf("%.2f", v);
    return 0;
}
