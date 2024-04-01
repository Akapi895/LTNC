#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int q;
    set <int> s;
    cin >> q;
    while (q--) {
        int a, x;
        cin >> a >> x;
        if (a == 1) s.insert(x);
        if (a == 2) s.erase(x);
        if (a == 3) {
            if (s.count(x) != 0) cout << "Yes\n";
            else cout << "No\n";
        }
    }
    return 0;
}



