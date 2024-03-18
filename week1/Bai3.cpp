#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a;
    long b;
    char c;
    float d;
    double e;
    cin >> a >> b >> c >> d >> e;
    cout << a << '\n' << b << '\n' << c << '\n' 
         << setprecision(3) << fixed << d << '\n'
         << setprecision(9) << fixed << e << '\n';
    return 0;
}