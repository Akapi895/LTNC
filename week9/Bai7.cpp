#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    string s;
    while (n--) {
        cin >> s;
        string a = "";
        string b = "";
        
        for (int i = 0; i < s.size(); ++i) {
            if (i % 2) a += s[i];
            else b += s[i];
        }
        cout << b << ' ' << a << '\n';
    }
    return 0;
}
