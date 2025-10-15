// link : https://codeforces.com/problemset/problem/1831/A
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
    int k = n + 1;
    vector<int> perm(n);

    for (int i = 0; i < n; i++)
        cin >> perm[i];

    for (int i = 0; i < n; i++)
    {
        perm[i] = k - perm[i];
    }

    cout << perm[0];
    for (int i = 1; i < n; i++)
        cout << " " << perm[i];
    cout << endl;
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