// link: https://codeforces.com/problemset/problem/492/A
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

void program()
{
    int n;
    cin >> n;
    int i = 1;
    int level = 0;
    while (n)
    {
        int sum = (i * (i + 1)) / 2;

        if (n >= sum)
            level++;

        n = max(0, n - sum);
        i++;
    }

    cout << level << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}