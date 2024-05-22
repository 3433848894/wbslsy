#include <iostream>
using namespace std;
int main()
{
    int i,m,n;
    cin >> n;
    for (i=1; i<=n; i++)
    {
        for(m=1; m<=i; m++)
        cout<<"*";
        cout<<endl;
    }
    return 0;
}