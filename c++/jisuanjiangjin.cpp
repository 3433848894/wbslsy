#include <bits/stdc++.h>


using namespace std;
int main()
{
    int n,award;
    cin>>n;
    if (n<100) award = 10;
    else if (n<110) award = 30;
        else if (n<120) award = 50;
            else if (n<130) award = 70;
                    else award = 80;

    cout<<award;
    return 0;

}
