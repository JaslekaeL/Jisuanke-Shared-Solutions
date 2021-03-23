//T1010：给出两个点的坐标，用距离公式求线段的长度。
#include <stdio.h>
#include <math.h>
int main(){
    double x1, y1;
    double x2, y2;
    double a, b;
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    a=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
    b=sqrt(a);
    printf("%.3lf", b);
    return 0;
}
