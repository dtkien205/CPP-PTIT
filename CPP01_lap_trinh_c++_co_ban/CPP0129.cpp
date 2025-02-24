#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, p;
        cin >> n >> p;
        int cnt = 0;
        for (int i = 1; i <= n; i++){
            if(i % p == 0){
                int tmp = i;
                while(tmp % p == 0){
                    cnt++;
                    tmp /= p;
                }
            }
        }
        cout << cnt << endl;
    }
}