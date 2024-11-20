#include <bits/stdc++.h>
using namespace std;

int main() {
    int h1, m1, h2, m2;
    scanf("%d:%d", &h1, &m1);
    scanf("%d:%d", &h2, &m2);

    int start_minutes = h1 * 60 + m1;
    int end_minutes = h2 * 60 + m2;

    int total_duration = end_minutes - start_minutes;

    int midpoint = start_minutes + total_duration / 2;

    int h3 = midpoint / 60;
    int m3 = midpoint % 60;

    printf("%02d:%02d\n", h3, m3);

    return 0;
}
