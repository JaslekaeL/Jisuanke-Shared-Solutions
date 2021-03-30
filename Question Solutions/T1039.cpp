//T1039：判断输入的成绩是否及格。
#include<stdio.h>
int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    if(x >= 60 && y < 60 || y >= 60 && x < 60)
        printf("1\n");
    else
        printf("0\n");
    return 0;
}
