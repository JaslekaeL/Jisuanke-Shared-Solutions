//T1056：输入一组数据，计算所获得的金、银、铜牌数目及总奖牌数。
#include <stdio.h>
int main(){
    int i, n, a, b, c;
    int j = 0, t = 0, y = 0, z = 0;
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        scanf("%d %d %d", &a, &b, &c);
        j += a;
        y += b;
        t += c;
    }
    z = j+y+t;
    printf("%d %d %d %d", j, y, t, z);
    return 0;
}
