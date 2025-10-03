#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int a,b,c;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    // NHẬP CÁC HỆ SỐ

    float delta = pow(b,2) - 4*a*c;
    // TÍNH BIỆT THỨC

    if (delta<0){
        cout << "This quadratic has no real roots.";
    } else if (delta==0){
        float x = -b/(2*a);
        cout << "This quadratic has one real root: x = " << x;
    } else {
        float x1 = (-b + sqrt(delta)) / (2*a);
        float x2 = (-b - sqrt(delta)) / (2*a);
        cout << "This quadratic has two real roots: x1 = " << x1 << " and x2 = " << x2;
    // XUẤT KẾT QUẢ NGHIỆM
    }
    return 0;
}