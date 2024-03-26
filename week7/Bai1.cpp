#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e6 + 15;
int A[MAXN];

int binsearch(int i, int j, int x) {
    int m = i + (j - i) / 2;
    if (A[m] == x) return m;
    if (A[m] < x) i = m + 1;
    else j = m;
    return binsearch(i, j, x);
}

int main(){
    int N;
    cin >> N;
    for (int i = 1; i <= N; ++i) {
        cin >> A[i];
    }
    int x;
    cin >> x;
    cout << binsearch(1, N, x);
    return 0;
}
