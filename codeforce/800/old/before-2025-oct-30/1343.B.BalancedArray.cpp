// link : https://codeforces.com/problemset/problem/1343/B
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

    if ((n / 2) & 1)
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
    vector<int> left(n / 2);

    for (int i = 0, ai = 2; i < left.size(); left[i] = ai, i++, ai += 4)
        ;

    for (int i = 0, a = 1; i < (n / 2); left.push_back(left[i] + a), i++, a *= -1)
        ;

    for (int i = 0; i < n; i++)
        cout << left[i] << " \n"[i == n - 1];
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