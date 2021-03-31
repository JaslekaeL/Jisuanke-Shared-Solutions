//T1043：计算邮费。
#include<stdio.h>
int main(){
    int h = 0;
    int f = 0;
    char z;
    scanf("%d %c", &h, &z);
    h = h - 1000;
    f = 8;
    while(h > 0){
        h -= 500;
        f += 4;
    }
    if(z == 'y')
        f += 5;
    printf("%d\n", f);
    return 0;
}
