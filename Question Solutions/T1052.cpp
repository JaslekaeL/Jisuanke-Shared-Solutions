//T1052：输入一组数据,计算其均值。
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
    int n, i;
    double a, s;
    cin >> n;
    s = 0;
    for(i = 1; i <= n; i++){
        cin >> a;
        s = s+a;
    }
    printf("%0.4f", s/n);
}
