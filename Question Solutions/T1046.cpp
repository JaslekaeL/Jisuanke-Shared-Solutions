//T1046：判断输入的年份是不是闰年。
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d", &n);
    if(n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
    printf("Y");
    else printf("N");
    return 0;
}
