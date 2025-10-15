// link : https://codeforces.com/problemset/problem/677/A
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

int main()
{
    optimize();
    int n, h;
    cin >> n >> h;

    int width = 0;
    for (int i = 0; i < n; i++)
    {
        int hi;
        cin >> hi;
        if (hi <= h)
            width++;
        else
            width += 2;
    }

    cout << width << endl;
    return 0;
}