// link : https://codeforces.com/problemset/problem/1455/B
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

    int sum = 0;
    int i = 1;
    while (sum < n)
        sum += i++;

    int move = i - 1;
    if (sum == n)
    {
        cout << move << endl;
        return;
    }
    int d = sum - n;

    if (d == 1)
        cout << move + 1 << endl;
    else
        cout << move << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}