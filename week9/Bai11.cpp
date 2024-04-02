#include <bits/stdc++.h>

using namespace std;

int main () {
    int N;
    cin >> N;
    int ans = 0;
    int cnt = 0;
    while (N) {
        if (N % 2 == 1) cnt++;
        ans = max(ans, cnt);
        if (N % 2 == 0) cnt = 0;
        N /= 2;
    }
    cout << ans;
    return 0;
}
