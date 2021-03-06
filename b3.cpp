#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, n, m;
    cin >> a >> n >> m;
    // int t = n/2;
    int res=1;
    while(n--)
    {
        res *= a;
        res = res % m;
    }
    cout << res % m << endl;
    return 0;
} 
