#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, x; 
	cin >> n >> x;
	int a[n+1];
	
	for(int i = 1; i <= n; i++)	
		cin >> a[i];
	int mid, left = 1, right = n;
	int ktra = 0;
	while (left <= right && ktra == 0)
    {
	    mid = (left + right)/2;
	    if(x > a[mid]) left = mid + 1;
	    else if(x < a[mid]) right = mid - 1;
	    else ktra = 1;
    }
	if(ktra == 1) cout << "YES";
	else cout << "NO";
}
