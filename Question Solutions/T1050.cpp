//T1050：输入一组年龄值，求平均年龄。
#include <stdio.h>
#include <math.h>
int main(){
    int i, year, n;
    int sum = 0;
    double average;
    scanf("%d\n", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &year);
        sum += year;
    }
    average =sum*1.0/n;
    printf("%.2f", average);
    return 0;
}
