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
    int n, m;
    cin >> n >> m;
    int cnt = 2 * n;

    vector<stack<int>> stks(m);

    for (int i = 0; i < m; i++)
    {
        int ki;
        cin >> ki;
        for (int j = 0; j < ki; j++)
        {
            int ai;
            cin >> ai;
            stks[i].push(ai);
        }
    }

    stack<int> match;
    map<int, int> mp;

    for (int i = 0; i < m; i++)
    {
        int top = stks[i].top();

        if (mp.count(top))
        {
            match.push(mp[top]);
            match.push(i);
            mp.erase(top);
        }
        else
        {
            mp[top] = i;
        }
    }

    while (match.size() > 0)
    {
        int a = match.top();
        match.pop();
        int b = match.top();
        match.pop();

        stks[a].pop();
        stks[b].pop();

        cnt -= 2;

        if (stks[a].size() > 0)
        {
            int aTop = stks[a].top();

            if (mp.count(aTop))
            {
                match.push(a);
                match.push(mp[aTop]);
                mp.erase(aTop);
            }
            else
            {
                mp[aTop] = a;
            }
        }

        if (stks[b].size() > 0)
        {
            int bTop = stks[b].top();

            if (mp.count(bTop))
            {
                match.push(b);
                match.push(mp[bTop]);
                mp.erase(bTop);
            }
            else
            {
                mp[bTop] = b;
            }
        }
    }

    for (stack<int> s : stks)
    {
        if (s.size() > 0)
        {
            cout << "No" << endl;
            return;
        }
    }

    cout << "Yes" << endl;
}
int main()
{
    optimize();
    program();
    return 0;
}