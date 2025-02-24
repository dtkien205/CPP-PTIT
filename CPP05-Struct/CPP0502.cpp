#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct ThiSinh {
    string name, ns;
    double score;
};

void nhap(ThiSinh& a)
{
    getline(cin, a.name);
    cin >> a.ns;
    double x, y, z;
    cin >> x >> y >> z;
    a.score = x + y + z;
}

void in(ThiSinh a)
{
    cout << a.name << ' ' << a.ns << ' ' << setprecision(1) << fixed << a.score;
}

int main(ThiSinh a)
{
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
