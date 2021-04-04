//T1063：计算人口增长。
#include <iostream>
using namespace std;
int main(){
    int n, i;
    double x;
    int a[105];
    cin >> x >> n;
    for(i = 0; i < n; i++)
        x *= (1+0.001);
    printf("%.4lf", x);
    return 0;
}
