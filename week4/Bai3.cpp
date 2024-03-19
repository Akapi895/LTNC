#include <bits/stdc++.h>

using namespace std;

long check(string S) {
    long flag = -1;
    long j = S.size() - 1;
    long i = 0;

    while (i < j) {
        if (S[i] != S[j]) {
            //cout << S[i] << ' ' << S[j] << '\n';
            if (flag != -1) flag = -2;
            if (S[i + 1] == S[j]) {
                flag = i;
                i++;
            }
            else if (S[i] ==  S[j - 1]) {
                flag = j;
                j--;
            }

        }
        i++;
        j--;
    }
    if (flag == -2) return -1;
    return flag;
}
int main() {
    int q;
    cin >> q;
    while (q--) {
        string S;
        cin >> S;
        cout << check(S) << '\n';
    }

    return 0;
}
