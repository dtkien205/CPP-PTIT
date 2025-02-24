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
    ifstream in1;
    ifstream in2;
    in1.open("DATA1.in");
    in2.open("DATA2.in");

    string s;
    set<string> hop, tmp, giao;
    while (in1 >> s) {
        chuanHoa(s);
        hop.insert(s);
        tmp.insert(s);
    }
    while (in2 >> s) {
        chuanHoa(s);
        hop.insert(s);
        if(tmp.count(s))
            giao.insert(s);
    }

    for (auto x : hop)
        cout << x << ' ';
    cout << endl;

    for (auto x : giao)
        cout << x << ' ';

    in1.close();
    in2.close();
}