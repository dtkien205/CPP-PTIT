#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct Product {
    int id;
    string name, group;
    double profit;
};

void nhap(Product a[], int n)
{
    for (int i = 0; i < n; i++) {
        a[i].id = i + 1;
        cin.ignore();
        getline(cin, a[i].name);
        getline(cin, a[i].group);
        double x, y;
        cin >> x >> y;
        a[i].profit = y - x;
    }
}

void in(Product a[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << a[i].id << ' ' << a[i].name << ' ' << a[i].group << ' ' << setprecision(2) << fixed << a[i].profit << endl;
    }
}

int cmp(Product a, Product b)
{
    return a.profit > b.profit;
}

int main()
{

    int n;
    cin >> n;
    Product a[n + 1];
    nhap(a, n);
    sort(a, a + n, cmp);
    in(a, n);
}
