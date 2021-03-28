//T1035：判断一个正整数是否是两位数。
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d", &n);
    if(n >= 10 && n <= 99)
        printf("1");
    else
        printf("0");
    return 0;
}
