//T1034：输入两个整数，比较它们的大小。
#include<stdio.h>
int main(){
    long long int x, y;
    scanf("%lld %lld", &x, &y);
    if(x > y)
        printf(">\n");
    else if(x == y)
        printf("=\n");
    else if(x < y)
        printf("<\n");
    return 0;
}
