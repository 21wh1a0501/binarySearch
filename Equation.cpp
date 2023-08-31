#include <bits/stdc++.h>
using namespace std;
int main() {
    double c;
    cin >> c;
    double l = 0;
    double r = 1e6;
    for (int i = 0; i < 100; i++) {
        double x = (r + l) / 2;
        double result = x * x + sqrt(x);
        if (result > c) {
            r = x;
        } else {
            l = x;
        }
    }

    cout << setprecision(10) << r << endl;
}
