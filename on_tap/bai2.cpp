#include<iostream>
using namespace std;
int main() {
    int a1, b1, c1, a2, b2, c2;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    int D, Dx, Dy, x, y;
    D = a1 * b2 - a2 * b1;
    Dx = c1 * b2 - c2 * b1;
    Dy = a1 * c2 - a2 * c1;
    if (D == 0) {
        if (Dx == Dy) cout << "Vo so nghiem";
        else cout << "Vo nghiem";
    }
    else {
        x = Dx / D, y = Dy / D;
        cout << "x = " << x << ", " << "y = " << y;
    }
    return 0;
}