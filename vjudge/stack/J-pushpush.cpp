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
    deque<int> q;

    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;

        if (i & 1)
        {
            q.push_front(ai);
        }
        else
        {
            q.push_back(ai);
        }
    }

    vector<int> ans(n);

    for (int i = 0; i < n; i++)
    {
        ans[i] = q.front();
        q.pop_front();
    }

    if (n & 1)
    {
        reverse(ans.begin(), ans.end());
    }
    cout << ans[0];
    for (int i = 1; i < ans.size(); i++)
    {
        cout << " " << ans[i];
    }
    cout << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}