#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void TestCase()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    sort(a, a + n);
    int d = a[n - 1] - a[0];
    vector<int> v;
    for (int i = 1; i <= sqrt(d); ++i) {
        if (d % i == 0) {
            v.push_back(i);
            if (i * i != d)
                v.push_back(d / i);
        }
    }

    int res = 0;
    for (int i = 0; i < v.size(); ++i) {
        int temp = a[0] % v[i];
        int j;
        for (j = 1; j < n; ++j) {
            if (a[j] % v[i] != temp)
                break;
        }
        if (j == n)
            res++;
    }
    cout << res << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--) {
        TestCase();
    }
    return 0;
}