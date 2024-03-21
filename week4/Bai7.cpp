#include <bits/stdc++.h>

using namespace std;


int W, H, x, y;
const int oo = 1e6 + 15;

namespace Sub1 {
    int A[1010][1010];
    int dp[1010][1010];
    void input() {
        for (int i = 1; i <= H; ++i) {
            for (int j = 1; j <= W; ++j) {
                char c;
                cin >> c;
                if (c == 'R') A[i][j] = 1;
                else if (c == 'E') A[i][j] = 0;
                else {
                    x = i;
                    y = j;
                    A[i][j] = 0;
                }
            }
        }
    }

    int solve(int i, int j) {
        if (A[i][j] == 1) return -oo;
        if (i == H + 1) {
            if (A[i][j] == 0) return 1;
            return 0;
        }
        if (dp[i][j] != -1) return dp[i][j];
        int cur = -oo;

        cur = max(cur, solve(i + 1, j));
        if (j + 1 <= W && A[i][j + 1] == 0)
            cur = max(cur, solve(i + 1, j + 1));
        if (j - 1 >= 1 && A[i][j - 1] == 0)
            cur = max(cur, solve(i + 1, j - 1));

        return dp[i][j] = cur;
    }
    void Process() {
        input();
        memset(dp, -1, sizeof(dp));
        if (solve(1, y) == 1) cout << "YES\n";
        else cout << "NO\n";
    }
}
 int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> W >> H;
    if (W <= 1000 && H <= 1000) Sub1::Process();

    return 0;
}
