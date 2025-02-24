    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long

    void solve()
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;
        int dem = 0;
        while(ss >> word){
            dem++;
        }
        cout << dem << endl;
        // cout << s << endl;
    }

    int main()
    {
        int t;
        cin >> t;
        cin.ignore();
        while (t--) {
            solve();
        }
    }
