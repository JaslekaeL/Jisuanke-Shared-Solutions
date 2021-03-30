//T1036：“收集瓶盖赢大奖”问题。
#include<stdio.h>
int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    if(x >= 10 || y >= 20 || x >= 10 && y <= 20)
        printf("1\n");
    else
        printf("0\n");
    return 0;
}
