#include <cmath>
#include <cstdio>
#include <map>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
    cin >> N;
    int A[110], B[110];
    map <int, int> mp;
    for (int i = 1; i <= N; ++i) {
        cin >> A[i];
        mp[A[i]]++;
    }
    for (int i = 1; i <= N + 1; ++i) {
        cin >> B[i];
        mp[B[i]]--;
        if (mp[B[i]] == -1) cout << B[i] << '\n';
    }
    return 0;
}
