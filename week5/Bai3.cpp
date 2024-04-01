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
    int a;
    vector <int> v;
    for (int i=0;i<n;i++) {
        cin >> a;
        v.push_back(a);
    }
    int q1;
    cin >> q1;
    int q2[2];
    for (int i=0;i<2;i++) cin >> q2[i];
    v.erase(v.begin()+q1-1);

    v.erase(v.begin()+q2[0]-1,v.begin()+q2[1] - 1);
    cout << v.size() << endl;
    for (int i=0;i<v.size();i++) cout << v[i] << " ";


    return 0;
}