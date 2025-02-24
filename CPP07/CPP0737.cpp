#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        ll sum = 0;
        for (int i = 0; i < k; i++)
            sum += a[i];

        ll maxSum = sum;
        int startIndex = 0;

        for (int i = k; i < n; i++) {
            sum += a[i] - a[i - k]; 
            if (sum > maxSum) {
                maxSum = sum;
                startIndex = i - k + 1; 
            }
        }

        for (int i = startIndex; i < startIndex + k; i++)
            cout << a[i] << ' ';
        cout << endl;
    }
    return 0;
}
