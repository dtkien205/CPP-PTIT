#include <cmath>
#include <iostream>

using namespace std; // Sử dụng không gian tên std

const long double epsilon = 1e-9;

int main()
{
    long double X, Y, r;
    cin >> X >> Y >> r; // Nhập tọa độ tâm (X, Y) và bán kính r

    long long dem = 0; // Biến đếm số điểm nguyên trong đường tròn
    long long xMin = static_cast<long long>(floor(X - r));
    long long xMax = static_cast<long long>(floor(X + r));

    for (long long x = xMin; x <= xMax; ++x) {
        long double khoangCachX = fabs(x - X);

        // Kiểm tra xem x có nằm trong đường tròn theo trục ngang không
        if (khoangCachX <= r) {
            long double khoangCachY = sqrt(r * r - khoangCachX * khoangCachX);

            // Xác định yMin và yMax - phạm vi của y tương ứng với x
            long long yMin = static_cast<long long>(floor(Y - khoangCachY));
            long long yMax = static_cast<long long>(floor(Y + khoangCachY));

            // Đếm số điểm nguyên y trong khoảng từ yMin đến yMax
            dem += (yMax - yMin + 1);
        }
    }

    cout << dem << endl; // In kết quả ra màn hình
    return 0;
}
