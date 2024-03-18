#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string ans = s.substr(0, 8);
    if (s[8] == 'A') {
        if (ans.substr(0, 2) == "12") {
            ans[0] = '0';
            ans[1] = '0';
        }
        return ans;
    }
    int h = 0;
    h = h * 10 + (int) (s[0] - '0');
    h = h * 10 + (int) (s[1] - '0');
    if (h != 12) h += 12;
    ans[1] = (char) (h % 10 + '0');
    h /= 10;
    ans[0] = (char) (h + '0');
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
