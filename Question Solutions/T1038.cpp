//T1038：判断一个数能不能同时被3、5、7整除。
#include<stdio.h>
int main(){
    int x, y;
    scanf("%d", &x);
    if(x % 3 == 0 && x % 5 == 0 && x % 7 == 0)
        printf("3 5 7\n");
    else if(x % 3 == 0 && x % 5 == 0)
        printf("3 5\n");
    else if(x % 5 == 0 && x % 7 == 0)
        printf("5 7\n");
    else if(x % 3 == 0 && x % 7 == 0)
        printf("3 7\n");
    else if(x % 3 == 0)
        printf("3\n");
    else if(x % 5 == 0)
        printf("5\n");
    else if(x % 7 == 0)
        printf("7\n");
    else
        printf("n\n");
    return 0;
}
