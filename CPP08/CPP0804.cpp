#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void chuanHoa(string &s){
    for (int i = 0; i < s.size(); i++){
        s[i] = tolower(s[i]);
    }
}

int main()
{
    ifstream in;
    ofstream out;
    in.open("VANBAN.in");

    string s;
    set<string> st;
    while(in >> s){
        chuanHoa(s);
        st.insert(s);
    }

    for (auto x : st)
        cout << x << endl;

    in.close();
}