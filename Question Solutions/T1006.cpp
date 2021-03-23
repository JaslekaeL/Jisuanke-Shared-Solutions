//T1006：读入三个整数，按每个整数占8个字符的宽度，右对齐输出它们。
#include <stdio.h>
int main(){
    char ch;
    scanf("%c", &ch);
    printf("  %c\n", ch);
    printf(" %c%c%c\n", ch, ch, ch);
    printf("%c%c%c%c%c\n", ch, ch, ch, ch, ch);
    return 0;
}
