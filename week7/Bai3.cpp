#include <bits/stdc++.h>

using namespace std;

int X, N, ps, A[40];

int dp[50][1500];

int Update() {
    for (int i = 1; i <= 35; ++i) {
        int a = 1;
        for (int j = 1; j <= N; ++j) a *= i;
        A[i] = a;
        if (a > 1000) return i;
    }
    return 0;
}

int solve(int i, int sum) {
    if (i == ps) {
        if (sum == 0) return 1;
        return 0;
    }
    if (dp[i][sum] != -1) return dp[i][sum];

    int cur = 0;
    cur += solve(i + 1, sum);
    if (A[i] <= sum) cur += solve(i + 1, sum - A[i]);

    return dp[i][sum] = cur;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

//    freopen("ThePowerSum.inp", "r", stdin);
//    freopen("ThePowerSum.out", "w", stdout);

    cin >> X >> N;
    ps = Update();
    memset(dp, -1, sizeof(dp));
    cout << solve(1, X) << '\n';

    return 0;
}
