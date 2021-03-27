//T1028：虫子每x小时能吃掉一个苹果，假设虫子在吃完一个苹果之前不会吃另一个，求经过y小时还有多少个完整的苹果。
#include <stdio.h>
int main(){
    int n, x, y, a;
    scanf("%d %d %d", &n, &x, &y);
    if(y/x == 0){
        a = n-(y/x);
    }
    else{
        a = n-(y/x)-1;
    }
    printf("%d", a);
    return 0;
}
