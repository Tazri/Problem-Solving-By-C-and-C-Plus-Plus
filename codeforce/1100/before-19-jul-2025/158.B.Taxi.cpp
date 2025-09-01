// link : https://codeforces.com/problemset/problem/158/B
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

    int tx = 0;
    int one = 0;
    int two = 0;
    int three = 0;

    for (int i = 0; i < n; i++)
    {
        int g;
        cin >> g;

        if (g == 1)
            one++;
        else if (g == 2)
            two++;
        else if (g == 3)
            three++;
        else
            tx++;
    }

    tx += three;
    one = max(one - three, 0);
    tx += (two / 2);
    tx += (one / 4);
    one = one % 4;
    int left = one;

    if (two & 1)
        left += 2;

    if (left > 4)
        tx += 2;
    else if (left > 0)
        tx++;

    cout << tx << endl;
}

int main()
{
    optimize();

    program();
    return 0;
}
