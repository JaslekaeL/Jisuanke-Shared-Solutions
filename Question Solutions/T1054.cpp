//T1054：输入一组数据,求最大值。
#include<stdio.h>
int main(){
    int p[1000], max = 0;
    int i, n;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &p[i]);
        if(max < p[i])
            max = p[i];
    }
    printf("%d", max);
    return 0;
}
