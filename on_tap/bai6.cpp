#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int number;
    cin >> number;
    int a = sqrt(number);
    int count = 0;
    for (int i = 0;i <= a;++i) {
        if (i * i == number) count++;

    }
    if (count == 1) cout << "YES";
    else cout << "NO";
    return 0;
}