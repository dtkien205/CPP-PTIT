#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct SinhVien {
    int stt;
    string msv, name, Class, email, work;
};

void chuanHoa(string& s)
{
    for (int i = 1; i < s.size(); i++) {
        if (s[i - 1] == ' ')
            s[i] = toupper(s[i]);
        else
            s[i] = tolower(s[i]);
    }
}

int cmp(SinhVien a, SinhVien b)
{
    return a.msv < b.msv;
}

int main()
{
    int n;
    cin >> n;
    SinhVien a[n];
    for (int i = 0; i < n; i++) {
        a[i].stt = i + 1;
        cin >> a[i].msv;
        scanf("\n");
        getline(cin, a[i].name);
        chuanHoa(a[i].name);
        cin >> a[i].Class >> a[i].email >> a[i].work;
    }
    sort(a, a + n, cmp);
    int q;
    cin >> q;
    while (q--) {
        string s;
        cin >> s;
        for (int i = 0; i < n; i++) {
            if (a[i].work == s) {
                cout << a[i].stt << ' ' << a[i].msv << ' ' << a[i].name << ' ' << a[i].Class << ' ' << a[i].email << ' ' << a[i].work << endl;
            }
        }
    }
}