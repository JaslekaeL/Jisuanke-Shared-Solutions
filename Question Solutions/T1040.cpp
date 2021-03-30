//T1040：根据条件判断能否赴约。
#include<stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    if(x == 1 || x == 3 || x == 5)
        printf("NO\n");
    else
        printf("YES\n");
    return 0;
}
