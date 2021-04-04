//T1061：输出整数序列中与指定数字相同的数的个数。
#include<stdio.h>
int main(){
    int k, i, n, digit, count1 = 0, count2 = 0, count3 = 0;
    scanf("%d %d\n", &n, &digit);
    for(i = 1; i <= n; i++){
        scanf("%d", &k);
        if(k == digit)
            count1 += 1;
    }
    printf("%d\n", count1);
    return 0;
}
