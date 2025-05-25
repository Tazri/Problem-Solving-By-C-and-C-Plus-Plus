// link : https://www.spoj.com/problems/RPLD/en/
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

void program(int s)
{
    int n, r;
    cin >> n >> r;
    vector<multiset<int>> students(n + 1);

    bool isPossible = true;
    for (int i = 0; i < r; i++)
    {
        int t, c;
        cin >> t >> c;

        if (students[t].find(c) != students[t].end())
        {
            isPossible = false;
        }
        else
        {
            students[t].insert(c);
        }
    }

    if (isPossible)
    {
        cout << "Scenario #" << s << ": possible" << endl;
    }
    else
    {
        cout << "Scenario #" << s << ": impossible" << endl;
    }
}

int main()
{
    optimize();
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        program(i);
    return 0;
}