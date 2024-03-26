#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5 + 105;
int N, Q, A[MAXN];

int fin(int x) {
    int i = 1;
    int j = N;
    while (i < j) {
        int m = i + (j - i) / 2;
        if (A[m] == x) return m;
        if (A[m] < x) i = m + 1;
        else j = m - 1;
    }
    return i;
}

int main(){

    cin >> N;
    for (int i = 1; i <= N; ++i) cin >> A[i];
    cin >> Q;

//    cout << N << ' ' << Q << '\n';

    while (Q--) {
        int a;
        cin >> a;
        int tmp = fin(a);
        if (A[tmp] != a) {
            if (A[tmp] < a) tmp++;
            cout << "No " << tmp << '\n';
        }
        else {
            for (int i = tmp; i >= 0; --i) {
                if (A[i] == a) tmp = i;
                else break;
            }
            cout << "Yes " << tmp << '\n';
        }
    }

    return 0;
}
