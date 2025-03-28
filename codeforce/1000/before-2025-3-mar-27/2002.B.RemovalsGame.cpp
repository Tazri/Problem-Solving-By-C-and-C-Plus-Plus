// link : https://codeforces.com/problemset/problem/2002/B
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
    vector<int> alice(n);
    vector<int> bob(n);

    for (int i = 0; i < n; i++)
        cin >> alice[i];
    for (int i = 0; i < n; i++)
        cin >> bob[i];

    int al = 0, ar = n - 1;
    int bl = 0, br = n - 1;

    for (int i = 0; i < n - 1; i++)
    {
        int mnA = min(alice[al], alice[ar]);
        int mxA = max(alice[al], alice[ar]);
        int mnB = min(bob[bl], bob[br]);
        int mxB = max(bob[bl], bob[br]);

        if (mnA != mnB || mxA != mxB)
        {
            cout << "Alice" << endl;
            return;
        }

        if (alice[al] == bob[bl])
        {
            al++;
            bl++;
        }
        else if (alice[al] == bob[br])
        {
            al++;
            br--;
        }
        else if (alice[ar] == bob[bl])
        {
            al--;
            bl++;
        }
        else if (alice[ar] == bob[br])
        {
            ar--;
            br--;
        }
    }

    cout << "Bob" << endl;
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