//T1053：输入一组数据,计算其和与均值。
#include <stdio.h>
#include <math.h>
int main(){
    int i, n;
    int a[10000] = {0};
    double data;
    int sum = 0;
    double average;
    scanf("%d\n", &n);
    for(i = 0; i < n; i++){
        scanf("%lf\n", &data);
        a[i] = data;
        sum += a[i];
    }
    average = sum*1.0/n;
    printf("%d %.5f", sum, average);
    return 0;
}
