//T1058：计算指定区间内所有奇数的和。
#include<stdio.h>
int main(){
    int i, n, a, b, m;
    int j = 0, t = 0, y = 0, sum = 0;
    scanf("%d %d", &m, &n);
    for(i = m; i <= n; i++){
        if(i % 2 == 1)
            sum += i;
    }
    printf("%d", sum);
    return 0;
}
