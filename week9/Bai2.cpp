#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int j;
    double c;
    string p;

    cin >> j >> c;
    getline(cin, p);
    getline(cin, p);

    cout << i + j << '\n';
    cout << setprecision(1) << fixed << (double) c + d << '\n';


    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s;
    if (s[s.size() - 1] == ' ' && p[0] == ' ') p.erase(0, 1);
    cout << p;
    return 0;
}