#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int id = 1;

class SinhVien {
private:
    string name, sub;

public:
    string lastName, ID;

    friend istream& operator>>(istream& in, SinhVien& a)
    {
        scanf("\n");
        getline(in, a.name);
        getline(in, a.sub);

        int x = a.name.find_last_of(" ");
        a.lastName = a.name.substr(x);

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

bool cmp(SinhVien a, SinhVien b)
{
    if (a.lastName != b.lastName)
        return a.lastName < b.lastName;
    else
        return a.ID < b.ID;
}

int main()
{
    int n;
    cin >> n;
    SinhVien a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++) {
        cout << a[i];
    }
}