#include<iostream>
#include<math.h>

using namespace std;

void input_pos(int *a, int *b, int n){
    for(int i = 1; i <= n; i++)
        cin >> a[i] >> b[i];
}

int check(int *a, int *b, int n)
{
    // same col,row, diag
    for(int i = 1; i < n; i++){
        for(int j = i + 1; j <= n; j++){
            if( a[i] == a[j] || b[i] == b[j] || abs(a[i] - a[j]) == abs(b[i] - b[j]))
                return 1;
        }
    }
    return 2;
}
int main()
{
    int n;
    cin >> n;

    int *a = new int [n];
    int *b = new int [n];
    input_pos(a,b,n);
    if(check(a,b,n) == 1) cout << "yes";
    else cout << "no";
    
    return 0;
}
