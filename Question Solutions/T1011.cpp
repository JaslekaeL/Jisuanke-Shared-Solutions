//T1011：反向输出一个三位数。
#include <stdio.h>
int main(){
    int n, a, b, c;
    scanf("%d",&n);
    if(n>=100&&n<=999){
        a=n/100;
        b=(n%100)/10;
        c=(n%100)%10;
        if(c!=0){
            printf("%d", a+b*10+c*100);
        }
        else{
            if(b!=0){
                printf("0%d", a+b*10);
            }
            else{
                //反向输出，且保留前导零
                printf("00%d", a);
            }
        }
    }
}
