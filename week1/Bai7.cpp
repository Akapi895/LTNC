#include <bits/stdc++.h>

using namespace std;


int main() {
    double N;
    cin >> N;
    double c1(0), c2(0), c3(0);
    for (int i = 1; i <= N;++i) {
        int a;
        cin >> a;
        if (a < 0) c1++;
        if (a == 0) c2++;
        if (a > 0) c3++;
    }
    cout << setprecision(6) << fixed 
         << (double) c3 / N * 1.000000 << '\n'
         << (double) c1 / N * 1.000000 << '\n'
         << (double) c2 / N * 1.000000 << '\n';
    return 0;    
}
