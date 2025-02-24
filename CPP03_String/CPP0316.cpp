#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void sumDigit(int& num)
{
    int sum = 0;
    while (num) {
        sum += num % 10;
        num /= 10;
    }
    num = sum;
}

void solve()
{
    string s;
    cin >> s;
    int num = 0;
    for (int i = 0; i < s.size(); i++)
        num += s[i] - '0';
    while (num >= 10)
        sumDigit(num);

    cout << (num == 9) << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}