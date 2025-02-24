#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int dem = 1;
        stack<int> st;
        st.push(1);
        for (auto x : s) {
            dem++;
            if (x == 'I') {
                while (!st.empty()) {
                    cout << st.top();
                    st.pop();
                }
            }
            st.push(dem);
        }

        while (!st.empty()) {
            cout << st.top();
            st.pop();
        }
        cout << endl;
    }
}