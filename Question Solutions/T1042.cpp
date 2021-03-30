//T1042：计算分段函数的值。
#include<stdio.h>
int main(){
    double N, y;
    scanf("%lf", &N);
    if(N >= 0 && N < 5){
        y = N*(-1)+2.5;
        printf("%.3lf\n",y);
    }
    else if(N >= 5 && N < 10){
        y = 2-1.5*(N-3)*(N-3);
        printf("%.3lf\n",y);
    }
    else if(N >= 10 && N < 20){
        y = N/2-1.5;
        printf("%.3f\n",y);
    }
    return 0;
}
