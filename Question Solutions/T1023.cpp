//T1023：利用公式转换温度单位。
#include <stdio.h>
int main(){
    double f, c;
    scanf("%lf", &f);
    c = 5.0*(f-32)/9;
    printf("%.5lf", c);
    return 0;
}
