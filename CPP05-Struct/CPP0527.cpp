#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct Time {
    int h, m, s;
};

int cmp(Time a, Time b)
{
    if (a.h < b.h)
        return 1;
    else if (a.h == b.h && a.m < b.m)
        return 1;
    else if (a.h == b.h && a.m == b.m && a.s < b.s)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    cin >> n;
    Time a[n];
    for (int i = 0; i < n; i++) 
        cin >> a[i].h >> a[i].m >> a[i].s;
    sort(a, a+n, cmp);
    for (int i = 0; i < n; i++)
        cout << a[i].h << ' ' << a[i].m << ' ' << a[i].s << endl;
}
