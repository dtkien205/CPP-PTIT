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
        cout << "DANH SACH SINH VIEN KHOA " << s << ":" << endl;
        string y = s.substr(2, 2);
        for (int i = 0; i < n; i++) {
            if (ds[i].getLOP().substr(1, 2) == y) {
                cout << ds[i];
            }
        }
    }
}