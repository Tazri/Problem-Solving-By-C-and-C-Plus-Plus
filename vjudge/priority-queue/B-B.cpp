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
    priority_queue<int> pq;
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;
        pq.push(ai);
    }

    while (pq.size() > 0)
    {
        int top = pq.top();
        pq.pop();
        ans.push_back(top);
        top /= 2;

        if (top)
        {
            pq.push(top);
        }
    }

    cout << ans[0];
    for (int i = 1; i < ans.size(); i++)
        cout << " " << ans[i];
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