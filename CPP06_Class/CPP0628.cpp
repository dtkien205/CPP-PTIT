#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

class DoanhNghiep {
public:
    string ma, name;
    int sl;

    friend istream& operator>>(istream& in, DoanhNghiep& a)
    {
        in >> a.ma;
        scanf("\n");
        getline(in, a.name);
        in >> a.sl;
        return in;
    }

    friend ostream& operator<<(ostream& out, DoanhNghiep a)
    {
        cout << a.ma << ' ' << a.name << ' ' << a.sl << endl;
        return out;
    }
};

bool cmp(DoanhNghiep a, DoanhNghiep b)
{
    if (a.sl != b.sl)
        return a.sl > b.sl;
    else
        return a.ma < b.ma;
}

int main()
{
    int n;
    cin >> n;
    DoanhNghiep a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
        cout << a[i];
}