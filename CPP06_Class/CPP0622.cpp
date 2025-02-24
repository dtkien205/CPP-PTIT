#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

class SinhVien {
private:
    string msv, name, lop, email;

public:
    string getLOP()
    { 
        return lop;
    }

    friend istream& operator>>(istream& in, SinhVien& a)
    {
        cin >> a.msv;
        scanf("\n");
        getline(cin, a.name);
        cin >> a.lop >> a.email;
        return in;
    }

    friend ostream& operator<<(ostream& out, SinhVien a)
    {
        cout << a.msv << ' ' << a.name << ' ' << a.lop << ' ' << a.email << endl;
        return out;
    }
};

int main()
{
    int n;
    cin >> n;
    SinhVien ds[n];
    for (int i = 0; i < n; i++)
        cin >> ds[i];
    int q;
    cin >> q;
    while (q--) {
        string s;
        cin >> s;
        cout << "DANH SACH SINH VIEN LOP " << s << ":" << endl;
        for (int i = 0; i < n; i++) {
            if (s == ds[i].getLOP()) {
                cout << ds[i];
            }
        }
    }
}