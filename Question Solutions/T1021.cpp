//T1021：计算甲流的死亡率。
#include <stdio.h>
int main(){
    int a, b;
    double c;
    scanf("%d %d", &a, &b);
    c=100.0*b/a;
    printf("%.3lf%%", c);
}
