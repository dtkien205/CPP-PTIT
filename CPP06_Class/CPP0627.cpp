#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int id = 1;

class SinhVien {

public:
    string ID, sub, name, NAME;

    friend istream& operator>>(istream& in, SinhVien& a)
    {
        scanf("\n");
        getline(in, a.name);
        getline(in, a.sub);
        a.NAME = a.name;

        for (int i = 0; i < a.NAME.size(); i++){
            a.NAME[i] = tolower(a.NAME[i]);
        }

        string word, tmp = "";
        stringstream ss(a.sub);
        while (ss >> word) {
            tmp += toupper(word[0]);
        }
        a.sub = tmp;

        a.ID = "GV";
        if (id < 10)
            a.ID += "0" + to_string(id);
        else
            a.ID += to_string(id);
        ++id;

        return in;
    }

    friend ostream& operator<<(ostream& out, SinhVien a)
    {
        cout << a.ID << ' ' << a.name << ' ' << a.sub << endl;
        return out;
    }
};

int main()
{
    int n;
    cin >> n;
    SinhVien a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int q;
    cin >> q;
    while (q--) {
        string s;
        scanf("\n");
        getline(cin, s);
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ":" << endl;
        for (int i = 0; i < s.size(); i++)
            s[i] = tolower(s[i]);
        for (int i = 0; i < n; i++) {
            if (a[i].NAME.find(s) != string::npos) {
                cout << a[i];
            }
        }
    }
}