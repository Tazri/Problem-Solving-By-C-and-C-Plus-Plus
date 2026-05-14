#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> allPattern;
vector<int> pattern;
int n;

void solve(int i)
{
    if (i >= n)
    {
        allPattern.push_back(pattern);
        return;
    }

    if (pattern.size() == 0 || pattern.back() == 0)
    {
        pattern.push_back(0);
        solve(i + 1);
        pattern.pop_back();

        pattern.push_back(1);
        solve(i + 1);
        pattern.pop_back();
        return;
    }

    pattern.push_back(0);
    solve(i + 1);
    pattern.pop_back();
}

void program(int program)
{
    cin >> n;
    solve(0);

    cout << "total pattern : " << allPattern.size() << endl;

    for (vector<int> pattern : allPattern)
    {
        for (int i = 0; i < n; i++)
            cout << pattern[i];

        cout << endl;
    }
}

int32_t main()
{

    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
        program(i);
    return 0;
}