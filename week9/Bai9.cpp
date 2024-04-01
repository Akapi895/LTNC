#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    map <string, long> mp;
    int n;
    cin >> n;
    while (n--) {
        string s;
        long i;
        cin >> s >> i;
        mp[s] = i;
    }  
    string s;
    while (cin >> s) {
        if (mp[s] == 0) cout << "Not found\n";
        else cout << s << '=' << mp[s] << '\n';
    }
    return 0;
}
