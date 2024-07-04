#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

void swap(double& x1, double& x2) {
    double c = x1;
    x1 = x2;
    x2 = c;
}

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    float delta = b * b - 4 * a * c;

    if (delta > 0) {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        if (x1 > x2) swap(x1, x2);

        cout << fixed << setprecision(2);
        cout << x1 << endl << x2;
    }
    else if (delta == 0) {
        double x = -b / (2 * a);
        cout << fixed << setprecision(2);
        cout << x;
    }
    else {
        cout << fixed << setprecision(2);
        cout << float((-b) / (2 * a)) << " " << -(sqrt(-delta) / (2 * a)) << endl;
        cout << float((-b) / (2 * a)) << " " << (sqrt(-delta) / (2 * a)) << endl;
    }

    return 0;
}
