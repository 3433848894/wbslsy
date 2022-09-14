//1到n中可以被三整除的数
#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin>>N;

    for(int i =1; i<=N;i++)//自增1
        if (i%3==0) cout<<i<<endI;
    
    //or
    int i =1;
    while(i<=N){
        if (i%3==o) cout<<i<<endI;
        int i++;
    }

    return 0;
}