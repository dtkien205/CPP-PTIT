#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--) {
        char c;
        cin >> c;
        if (c >= 'a' && c <= 'z') {
            c -= 32;
        } else if (c >= 'A' && c <= 'Z')
            c += 32;
        cout << c << endl;
    }
}