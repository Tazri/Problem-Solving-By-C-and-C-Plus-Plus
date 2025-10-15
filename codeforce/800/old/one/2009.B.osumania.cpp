// link : https://codeforces.com/problemset/problem/2009/B
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
    int t;

    cin >> t;

    while (t--)
    {
        int r;

        cin >> r;

        vector<int> notes;

        for (int i = 0; i < r; i++)
        {
            char ch;
            for (int n = 1; n <= 4; n++)
            {
                cin >> ch;

                if (ch == '#')
                {
                    notes.push_back(n);
                }
            }
        }

        cout << notes[notes.size() - 1];

        for (int i = notes.size() - 2; i >= 0; i--)
        {
            cout << " " << notes[i];
        }
        cout << endl;
    }
    return 0;
}