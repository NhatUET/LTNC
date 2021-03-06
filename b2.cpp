#include<iostream>
#include<cmath>
using namespace std;
int a[10000];
void snt(int n){
    for (int i = 2; i <= n; i++)
        a[i] = 1;
    a[0] = a[1] = 0;
    for (int i = 2; i <= sqrt(n); i++)
    if (a[i])
        for (int j = 2 * i; j <= n; j += i)
            a[j] = 0;
}

int main()
{
	int n;
	cin >> n;
	
	snt(n);
	
	for(int i = 2; i <= n; i++)
	{
		if(a[i] == 1) cout << i << " ";
	}
	
	return 0;
}
