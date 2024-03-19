#include <bits/stdc++.h>

using namespace std;

void update(int *a,int *b) {
    // Complete this function   
    int tmp = *a + *b;
    int tmp2 = abs(*a - *b);
    *a = tmp;
    *b = tmp2;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}