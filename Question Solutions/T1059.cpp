//T1059：计算指定区间内能被17整除的数的和。
#include <stdio.h>
#include <math.h>
int main(){
    int sum = 0;
    int i, m, n;
    scanf("%d %d", &m, &n);
    for(i = m; i <= n; i++){
        if(i % 17 == 0)
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}
