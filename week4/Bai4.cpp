#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    vector<vector<int>> A;
    int n, q;
    cin >> n >> q;
    A.resize(n);
    for (int i = 0; i < n; ++i) {
        int m;
        cin >> m;
        A[i].resize(m);
        for (int j = 0; j < m; ++j) cin >> A[i][j];
    } 
    while (q--) {
        int i, j;
        cin >> i >> j;
        cout << A[i][j] << '\n';
    } 
    return 0;
}