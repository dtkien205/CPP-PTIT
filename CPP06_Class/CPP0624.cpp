#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

class SinhVien {
private:
    string msv, name, lop, email;

public:
    string getMSV()
    {
        return msv;
    }

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
        scanf("\n");
        getline(cin, s);
        string tmp = s;
        for (int i = 0; i < s.size(); i++) {
            if (isalpha(s[i]))
                s[i] = toupper(s[i]);
        }
        cout << "DANH SACH SINH VIEN NGANH " << s << ":" << endl;

        string nganh;
        if (tmp == "Ke toan")
            nganh = "KT";
        if (tmp == "Cong nghe thong tin")
            nganh = "CN";
        if (tmp == "An toan thong tin")
            nganh = "AT";
        if (tmp == "Vien thong")
            nganh = "VT";
        if (tmp == "Dien tu")
            nganh = "DT";

        for (int i = 0; i < n; i++) {
            if (ds[i].getMSV().substr(5, 2) == nganh) {             
                if ((nganh == "CN" || nganh == "AT") && ds[i].getLOP()[0] == 'E') {
                    continue;
                }
                cout << ds[i];
            }
        }
    }
}