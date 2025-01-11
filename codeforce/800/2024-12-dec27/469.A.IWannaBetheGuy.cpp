// https://codeforces.com/problemset/problem/469/A
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
    vector<bool> levels(n, false);

    int p;
    cin >> p;

    for (int i = 0; i < p; i++)
    {
        int pi;
        cin >> pi;
        levels[pi - 1] = true;
    }

    cin >> p;

    for (int i = 0; i < p; i++)
    {
        int pi;
        cin >> pi;
        levels[pi - 1] = true;
    }

    bool isPass = true;

    for (bool i : levels)
    {
        if (!i)
        {
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
    }
    cout << "I become the guy." << endl;

    return 0;
}