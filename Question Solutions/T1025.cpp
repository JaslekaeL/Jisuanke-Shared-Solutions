//T1025：计算浮点数相除的余数。
#include <stdio.h>
#include <stdlib.h>
int main(){
    double a, b, r;
    //a,b分别为被除数和除数，r为余数，k为商
    int k;
    scanf("%lf %lf", &a, &b);
    k = a/b;
    r = a-k*b;
    printf("%.6f\n", r);  //这种格式可以保证输出时小数尾部没有多余的0
    return 0;
}
