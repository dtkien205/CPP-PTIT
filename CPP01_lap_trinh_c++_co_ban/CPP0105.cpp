#include <bits/stdc++.h>
using namespace std;

int check(string s){
    for (int i = 0; i < s.size(); i++){
        if (s[i] != '0' && s[i] != '6' && s[i] != '8')
            return 0 ;
    }
    return 1;
}

int main(){
    int t;cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(check(s)) cout << "YES\n";
        else cout << "NO\n";
        //cout << check(s) << endl;
    }
}