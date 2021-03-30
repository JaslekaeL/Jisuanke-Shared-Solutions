//T1041：判断选择的交通工具。
#include<stdio.h>
int main(){
    int x;
    double t1, t2;
    scanf("%d", &x);
    t1=50 + x / 3.0;
    t2=x / 1.2;
    if(t1 < t2)
        printf("Bike\n");
    else if(t1 == t2)
        printf("All\n");
    else if(t1 > t2)
        printf("Walk\n");
    return 0;
}
