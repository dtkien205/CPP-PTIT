#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

class SinhVien {
private:
    string name, lop, ns;
    double gpa;

public:
    friend istream& operator>>(istream& in, SinhVien& a)
    {
        getline(in, a.name);
        in >> a.lop >> a.ns >> a.gpa;
        if (a.ns[2] != '/')
            a.ns = "0" + a.ns;
        if (a.ns[5] != '/')
            a.ns.insert(3, "0");

        string tmp = "", word;
        stringstream ss(a.name);
        while (ss >> word) {
            word[0] = toupper(word[0]);
            for (int i = 1; i < word.size(); i++)
                word[i] = tolower(word[i]);
            tmp += word + " ";
        }
        a.name = tmp;

        return in;
    }

    friend ostream& operator<<(ostream& out, SinhVien a)
    {
        out << "B20DCCN001" << ' ' << a.name << a.lop << ' ' << setprecision(2) << fixed << a.ns << ' ' << a.gpa;
        return out;
    }
};

int main()
{
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}