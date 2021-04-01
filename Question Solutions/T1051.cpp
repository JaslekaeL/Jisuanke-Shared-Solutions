//T1051：输入一组数据表示每月的月末结余，计算平均结余。
#include<stdio.h>
int main(){
    double x, y, k[12];
    int i, l;
    for(i = 0; i < 12; i++)
        scanf("%lf", &k[i]);
    y = 0;
    for(i = 0; i < 12; i++)
        y += k[i];
    printf("$%.2lf\n", y/12);
    getchar();
    getchar();
    return 0;
}
