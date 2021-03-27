//T1030：给定一个整数N，判断其正负。
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d", &n);
    if(n > 0)
        printf("positive\n");
    if(n == 0)
        printf("zero\n");
    if(n < 0)
        printf("negative\n");
    return 0;
}
