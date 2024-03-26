#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map> 

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    map <string, int> mp;
    int n;
    cin >> n;
    while (n--) {
        int a;
        cin >> a;
        if (a == 1) {
            string tmp = "";
            int sum;
            cin >> tmp >> sum;
            mp[tmp] += sum;
        }
        else if (a == 2) {
            string tmp;
            cin >> tmp;
            mp[tmp] = 0;
        }
        else if (a == 3) {
            string tmp;
            cin >> tmp;
            cout << mp[tmp] << '\n';
        }
    }  
    return 0;
}
