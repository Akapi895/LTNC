#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
    vector<int> A;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        int a;
        cin >> a;
        A.push_back(a);
    }
    sort(A.begin(), A.end());
    for (int i = 0; i < N; ++i) cout << A[i] << ' ';
    return 0;
}
