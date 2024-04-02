#include <bits/stdc++.h>

using namespace std;

int A[8][8];

int main() {
    for (int i = 1; i <= 6; ++i) {
        for (int j = 1; j <= 6; ++j) {
            int a;
            cin >> a;
            A[i][j] = a;
        }
    }
    int ans = -100000;
    for (int i = 2; i <= 5; ++i) {
        for (int j = 2; j <= 5; ++j) {
            int sum = A[i][j];
            sum = sum + A[i-1][j-1] + A[i-1][j]
                    + A[i-1][j+1] + A[i+1][j-1]
                    + A[i+1][j] + A[i+1][j+1];
            ans = max(ans, sum);
        }
    }
    cout << ans;
    return 0;
}