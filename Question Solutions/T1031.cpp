//T1031：给定一个浮点数，输出这个数的绝对值。
#include<stdio.h>
#include<math.h>
int main(){
  double a, b;
  scanf("%lf", &a);
  b = fabs(a);
  printf("%.2lf\n", b);
  return 0;
}
