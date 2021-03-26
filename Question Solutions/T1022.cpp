//T1022：计算多项式的值。
#include <stdio.h>
int main(){
    double a, b, c, d, x;
    double y;
    scanf("%lf %lf %lf %lf %lf", &x, &a, &b, &c, &d);
    y=a*x*x*x+b*x*x+c*x+d;
    printf("%.7lf", y);
    return 0;
}
