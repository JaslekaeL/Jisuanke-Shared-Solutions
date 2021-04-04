//T1062：计算乘方。
#include<stdio.h>
#include<math.h>
int main(){
    int a, n, digit, count1 = 0, count2 = 0, count3 = 0;
    scanf("%d %d", &a, &n);
    digit = pow(a,n);
    printf("%d\n", digit);
    return 0;
}
