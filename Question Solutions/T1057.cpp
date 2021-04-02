//T1057：利用多边形内角和公式计算未知角度。
#include <stdio.h>
int main(){
    int i, n, a, b, c;
    int j = 0, t = 0, y = 0, sum = 0;
    scanf("%d\n", &n); 
    for(i = 2; i <= n; i++){
        scanf("%d", &a);
        sum += a;
    }
    b = (n-2)*180-sum;
    printf("%d", b);
    return 0;
}
