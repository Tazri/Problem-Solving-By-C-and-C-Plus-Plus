// link: https://codeforces.com/problemset/problem/344/A
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
    int n;
    cin >> n;

    int group = 1;
    string prev, curr;
    cin >> prev;

    for (int i = 1; i < n; i++)
    {
        cin >> curr;

        if (curr != prev)
        {
            group++;
            prev = curr;
        }
    }

    cout << group << endl;
    return 0;
}