#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N;
    cin >> N;
    int A[1010];
    for (int i = 1; i <= N; ++i) cin >> A[i];
    for (int i = N; i >= 1; --i) cout << A[i] << ' ';  
    return 0;
}
