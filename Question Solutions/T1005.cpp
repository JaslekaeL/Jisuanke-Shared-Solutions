//T1005：输出由字符构成的等腰三角形。
#include <stdio.h>
int main(){
    char ch;
    scanf("%c", &ch);
    printf("  %c\n", ch);
    printf(" %c%c%c\n", ch, ch, ch);
    printf("%c%c%c%c%c\n", ch, ch, ch, ch, ch);
    return 0;
}
