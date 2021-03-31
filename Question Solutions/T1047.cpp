//T1047：判断给定的点是否在特定的正方形内。
#include <stdio.h>
#include <stdlib.h>
int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    if(x >= -1 && x <= 1 && y >= -1 && y <= 1)
        printf("yes");
    else printf("no");
    return 0;
}
