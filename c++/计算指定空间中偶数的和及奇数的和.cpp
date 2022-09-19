//计算指定空间中偶数的和及奇数的和
#include  <bits/stdc++.h>

using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int sum1 = 0;
    int sum2 = 0;
    for (int i=n; i <=m; i++) {
        if (i%2 == 0)
            sum1=sum+i;
        else
            sum2=sum+i;

    }
    cout<<sum1<<sum2; 