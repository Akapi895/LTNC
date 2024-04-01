#include <bits/stdc++.h>

using namespace std;


int main()
{
    int A[1050];
    int N;
    cin >> N;
    for (int i = 1; i <= N; ++i) cin >> A[i];
    for (int i = N; i >= 1; --i) cout << A[i] << ' ';
    return 0;
}
