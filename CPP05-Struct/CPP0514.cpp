#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct SinhVien {
    string ten, lop, ns, msv;
    float diem;
};

void chuanHoa(string s){
    string word;
    vector <string> v;
    stringstream ss(s);
    while(ss >> word){
        word[0] = toupper(word[0]);
        for (int i = 1; i < word.size(); i++){
            word[i] = tolower(word[i]);
        }
        v.push_back(word);
        
    }
    for (auto x : v) cout << x << ' ';
}

void nhap(SinhVien a[], int n)
{
    for (int i = 0; i < n; i++) {
        cin.ignore();
        string s = to_string(i + 1);
        while (s.size() < 3) {
            s = "0" + s;
        }
        s = "B20DCCN" + s;
        a[i].msv = s;
        getline(cin, a[i].ten);
        cin >> a[i].lop >> a[i].ns >> a[i].diem;
    }
}

void in(SinhVien a[], int n)
{
    for (int i = 0; i < n; i++) {
        string s = a[i].ns;
        if (s[2] != '/') {
            s = "0" + s;
        }
        if (s[5] != '/') {
            s.insert(3, "0");
        }
        a[i].ns = s;
        cout << a[i].msv << ' ';
        chuanHoa(a[i].ten); 
        cout << a[i].lop << ' ' << a[i].ns << ' ' << setprecision(2) << fixed << a[i].diem << endl;
    }
}

int main()
{
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    // cout << "\n";
    // chuanHoa("DO     TrUnG kIEN");
    return 0;
}
