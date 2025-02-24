#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct Person {
    string name, birthday;
};

void nhap(Person a[], int n)
{
    for (int i = 0; i < n; i++) {
        cin >> a[i].name >> a[i].birthday;
    }
}

int cmp(Person a, Person b)
{
    string s1 = a.birthday;
    string s2 = b.birthday;
    int d1 = stoi(s1.substr(0, 2)), d2 = stoi(s2.substr(0, 2));
    int m1 = stoi(s1.substr(3, 2)), m2 = stoi(s2.substr(3, 2));
    int y1 = stoi(s1.substr(6, 4)), y2 = stoi(s2.substr(6, 4));
    if (y1 > y2)
        return 1;
    else if (y1 == y2 && m1 > m2)
        return 1;
    else if (y1 == y2 && m1 == m2 && d1 > d2)
        return 1;
    else
        return 0;
}

void in(Person a[], int n)
{
    cout << a[0].name << "\n" << a[n-1].name;
}

int main()
{
    struct Person ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sort(ds, ds + N, cmp);
    in(ds, N);
    return 0;
}
