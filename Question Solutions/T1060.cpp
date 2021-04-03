//T1060：计算1,5,10出现的次数。
#include <stdio.h>
int main(){
    int i, k, digit, a = 0, b = 0, c = 0;
    scanf("%d", &k);
    for(i = 1; i <= k; i++){
        scanf("%d", &digit);
        if(digit == 1)
            a++;
        else if(digit == 5)
            b++;
        else if(digit == 10)
            c++;
    }
    printf("%d\n%d\n%d\n", a, b, c);
    return 0;
}
