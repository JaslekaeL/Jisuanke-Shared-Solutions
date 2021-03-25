//T1018：使用默认的整除和取余运算，给定被除数和除数，求整数商及余数。
#include <stdio.h>
int main(){
    int a, b, c, d;
    scanf("%d %d", &a, &b);
    d=a%b;
    c=(a-d)/b;
    printf("%d %d", c, d);
    return 0;
}
