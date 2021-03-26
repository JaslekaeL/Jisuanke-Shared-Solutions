//T1024：利用公式计算圆的直径、周长和面积。
#include <stdio.h>
int main(){
    double r;
    double d, c, s;
    scanf("%lf", &r);
    double PI=3.14159;
    d=2*r;
    c=2*PI*r;
    s=PI*r*r;
    printf("%.4lf %.4lf %.4lf", d, c, s);
    return 0;
}
