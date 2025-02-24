#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, k;
    cin >> n >> k;
    long long sum = 0;
    for (int i = 1; i <= n; i++){
        sum += i % k;
    }
    cout << sum << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}

//C2
// long long calculate_S(long long N, long long K) {
//     // Số chu kỳ đầy đủ
//     long long full_cycles = N / K;

//     // Tổng của một chu kỳ
//     long long S_cycle = (K * (K - 1)) / 2;

//     // Phần dư cuối cùng
//     long long remainder = N % K;

//     // Tổng của phần dư
//     long long S_remainder = (remainder * (remainder + 1)) / 2;

//     // Tổng cuối cùng
//     long long S = full_cycles * S_cycle + S_remainder;

//     return S;
// }