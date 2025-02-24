#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int id = 1;

class SinhVien {
private:
    string name;

public:
    string lastName, ID, sub;

    friend istream& operator>>(istream& in, SinhVien& a)
    {
        scanf("\n");
        getline(in, a.name);
        getline(in, a.sub);

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
        string word, tmp = "";
        stringstream ss(s);
        while (ss >> word) {
            tmp += toupper(word[0]);
        }
        cout << "DANH SACH GIANG VIEN BO MON " << tmp << ":" << endl;

        for (int i = 0; i < n; i++) {
            if (tmp == a[i].sub) {
                cout << a[i];
            }
        }
    }
}