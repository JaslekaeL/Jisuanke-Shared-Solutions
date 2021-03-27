//T1027：大象喝水，问大象至少要喝多少桶水才会解渴。
#include <stdio.h>
#define PI 3.14159
int main(){
    int h, r, i;
    float V,t;
    scanf("%d %d", &h, &r);
    V = PI*r*r*h;
    t = 20*1000-V;
    for(i = 1; t > 0; i++)
        t = t-V;
    printf("%d", i);
    return 0;
}
