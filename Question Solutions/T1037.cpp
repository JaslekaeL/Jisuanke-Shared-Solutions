//T1037：判断一个数能不能同时被3和5整除。
#include<stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    if(x % 3 == 0 && x % 5 == 0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
