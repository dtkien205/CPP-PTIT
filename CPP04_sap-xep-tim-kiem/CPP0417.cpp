#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector <ll> v1(n), v2(n);
        for (int i = 0; i < n; i++){
            cin >> v1[i];
            v2[i] = v1[i];
        }
        sort(v2.begin(), v2.end());
        int start, end;
        for (int i = 0; i < n; i++){
            if(v1[i] != v2[i]){
                start = i;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--){
            if(v1[i] != v2[i]){
                end = i;
                break;
            }
        }
        cout << start + 1 << ' ' << end + 1;
        cout << endl;
    }
}