#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int idKH = 1;
int idMH = 1;
int idHD = 1;

class KhachHang;
class MatHang;
class HoaDon;

map<string, KhachHang> KH;
map<string, MatHang> MH;
map<string, HoaDon> HD;

class KhachHang {
private:
    string maKH, tenKH, gt, birthDay, address;

public:
    string getTenKH() { return tenKH; }
    string getDiaChi() { return address; }

    friend class HoaDon;
    friend istream& operator>>(istream& in, KhachHang& a)
    {
        if (idKH < 10)
            a.maKH += "KH00" + to_string(idKH);
        else
            a.maKH += "KH0" + to_string(idKH);
        idKH++;

        scanf("\n");
        getline(in, a.tenKH);
        getline(in, a.gt);
        getline(in, a.birthDay);
        getline(in, a.address);
        KH[a.maKH] = a;
        return in;
    }
};

class MatHang {
private:
    string maMH, tenMH, donVi;
    int giaMua, giaBan;

public:
    string getTenMH() { return tenMH; }
    string getDonVi() { return donVi; }
    int getGiaMua() { return giaMua; }
    int getGiaBan() { return giaBan; }

    friend class HoaDon;
    friend istream& operator>>(istream& in, MatHang& a)
    {
        if (idMH < 10)
            a.maMH += "MH00" + to_string(idMH);
        else
            a.maMH += "MH0" + to_string(idMH);
        idMH++;

        scanf("\n");
        getline(in, a.tenMH);
        getline(in, a.donVi);
        cin >> a.giaMua >> a.giaBan;
        MH[a.maMH] = a;
        return in;
    }
};

class HoaDon {
private:
    string maHD, makh, mamh;
    int soLuong;

public:
    friend istream& operator>>(istream& in, HoaDon& a)
    {
        if (idHD < 10)
            a.maHD += "HD00" + to_string(idHD);
        else
            a.maHD += "HD0" + to_string(idHD);
        idHD++;
        scanf("\n");
        in >> a.makh >> a.mamh >> a.soLuong;

        HD[a.maHD] = a;
        return in;
    }

    friend ostream& operator<<(ostream& out, HoaDon a)
    {
        cout << a.maHD << ' ' << KH[a.makh].getTenKH() << ' ' << KH[a.makh].getDiaChi() << ' ' << MH[a.mamh].getTenMH() << ' ' << MH[a.mamh].getDonVi() << ' ' << MH[a.mamh].getGiaMua() << ' ' << MH[a.mamh].getGiaBan() << ' ' << a.soLuong << ' ' << 1ll * a.soLuong * MH[a.mamh].getGiaBan() << endl;

        return out;
    }
};

int main()
{
    
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N, M, K, i;
    cin >> N;
    for (i = 0; i < N; i++)
        cin >> dskh[i];
    cin >> M;
    for (i = 0; i < M; i++)
        cin >> dsmh[i];
    cin >> K;
    for (i = 0; i < K; i++)
        cin >> dshd[i];
    for (i = 0; i < K; i++)
        cout << dshd[i];
    return 0;
}
