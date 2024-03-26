#include <bits/stdc++.h>

using namespace std;

char A[] = {'a', 'b', 'c', 'd'};

int C[5];
void W() {
    for (int i = 1; i <= 3; ++i) cout << A[C[i]];
    cout << '\n';
}
void Try(int i) {
    for (int j = 0; j < 4; ++j) {
        C[i] = j;
        if (i == 3) W();
        else Try(i + 1);
    }
}
int main(){
    Try(1);
    return 0;
}
