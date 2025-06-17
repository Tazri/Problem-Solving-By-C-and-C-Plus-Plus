// link : https://cses.fi/problemset/task/1645
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
    stack<int> stk;
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> ans;
    ans.reserve(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            stk.push(i);
            ans.push_back(-1);
            continue;
        }

        if (arr[stk.top()] < arr[i])
        {
            ans.push_back(stk.top());
            stk.push(i);
            continue;
        }

        while (stk.size() > 0 && arr[stk.top()] >= arr[i])
        {
            stk.pop();
        }

        if (stk.empty())
        {
            ans.push_back(-1);
            stk.push(i);
            continue;
        }

        ans.push_back(stk.top());
        stk.push(i);
    }

    cout << ans[0] + 1;
    for (int i = 1; i < n; i++)
    {
        cout << " " << ans[i] + 1;
    }
    cout << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}