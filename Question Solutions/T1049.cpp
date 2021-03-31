//T1049：假设有n个苹果，买完时箱子里混进了一条虫子，虫子每x小时能吃掉一个苹果，假设虫子在吃完一个苹果之前不会吃另一个。
//求经过y小时还有多少个完整的苹果。
#include<stdio.h>
int main(){
    double n, x, y;
    int z;
    scanf("%lf %lf %lf", &n, &x, &y);
    z = n-y/x;
    if(z <= 0){
        printf("0\n");
    }
    else{
        printf("%d\n", z);
    }
    return 0;
}
