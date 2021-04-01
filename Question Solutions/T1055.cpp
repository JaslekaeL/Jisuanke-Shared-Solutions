//T1055：输入一组数据,求序列的最大跨度值。
#include <stdio.h>
int main(){
    int i, n, sum = 0, max = -(1<<30), min = (1<<30);
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        int num;
        scanf("%d", &num);
        if(num > max)
            max = num;
        if(num < min)
            min = num;
    }
    printf("%d\n", max-min);
    return 0;
}
