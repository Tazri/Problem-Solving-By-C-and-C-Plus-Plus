// link : https://codeforces.com/problemset/problem/1914/B
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
    int n, k;
    cin >> n >> k;
    vector<int> perm(n + 1, 0);

    for (int i = 1; i <= n; i++)
        perm[i] = i;

    int r = n - k;
    int l = 1;

    while (l < r)
    {
        int temp = perm[l];
        perm[l] = perm[r];
        perm[r] = temp;
        l++;
        r--;
    }

    cout << perm[1];
    for (int i = 2; i <= n; i++)
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