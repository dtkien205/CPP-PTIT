#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int l, r; cin >> l >> r;
    for (int i = l; i < r; i++){
        if(a[i] > a[i+1]){
            for (int j = i; j < r; j++){
                if(a[j] <= a[j+1]){
                    cout << "No\n";
                    return;
                }
            }
        }
    }
    cout << "Yes\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}