// link : https://codeforces.com/problemset/problem/1858/C
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
    vector<int> mp(n + 1, 0);
    vector<bool> take(n + 1, false);
    vector<int> perm(n);

    for (int i = 1; i <= n / 2; i++)
        mp[i] = i * 2;

     for (int i = 0, ni = 1; ni <= n; ni++)
    {
        int curr = ni;

        while (curr <= n)
        {
            if (take[curr])
            {
                break;
            }
            take[curr] = true;
            perm[i] = curr;
            i++;
            curr *= 2;
        }
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