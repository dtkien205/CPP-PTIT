#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int id = 1;

class SinhVien {
private:
    string name, lop, ns;
    double gpa;

public:
    friend istream& operator>>(istream& in, SinhVien& a)
    {
        getchar();
        getline(in, a.name);
        cin >> a.lop >> a.ns >> a.gpa;

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
            tmp = tmp + word + " ";
        }
        a.name = tmp;

        return in;
    }

    friend ostream& operator<<(ostream& out, SinhVien a)
    {
        printf("B20DCCN%03d ", id++);
        out << a.name << a.lop << ' ' << a.ns << ' ' << setprecision(2) << fixed << a.gpa << endl;
        return out;
    }
};

int main()
{
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++) {
        cin >> ds[i];
    }
    for (i = 0; i < N; i++) {
        cout << ds[i];
    }
    return 0;
}