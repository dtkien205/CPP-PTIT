#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    ifstream in;
    ofstream out;
    in.open("DATA.in");

    int x;
    int cnt[100005] = {};
    while(in >> x){
        cnt[x]++;
    }
    for (int i = 0; i <= 100001; i++){
        if(cnt[i]){
            cout << i << ' ' << cnt[i] << endl;
        }
    }
        

    in.close();
}