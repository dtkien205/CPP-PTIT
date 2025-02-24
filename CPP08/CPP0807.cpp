#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    ifstream in;
    in.open("DATA.in");

    int n, m;
    in >> n >> m;
    set<int> st, giao;
    while (n--) {
        int x;
        in >> x;
        st.insert(x);
    }
    while (m--) {
        int x;
        in >> x;
        if (st.count(x))
            giao.insert(x);
    }

    for (auto x : giao)
        cout << x << ' ';

    in.close();
}