//T1033：给定一个字符，判断这个字符的ASCII码是奇数还是偶数。
#include<stdio.h>
#include<math.h>
int main(){
  char a;
  int n;
  scanf("%c", &a);
  n = a;
  if(n % 2 == 0)
      printf("NO\n");
  else
      printf("YES\n");
  return 0;
}
