//T1009：给出一个等差数列的前两项a1，a2，求第n项是多少。
#include <stdio.h>
int main(){
    int a1, a2, n;
    int d;
    scanf("%d %d %d", &a1, &a2, &n);
    d=a1+(n-1)*(a2-a1);
    printf("%d", d);
    return 0;
}
