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
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    vector<int> pre(n + 1, 0);
    vector<int> post(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        pre[i] += pre[i - 1] + v[i];
    }

    for (int i = n; i >= 0; i--)
    {
        if (i == n)
        {
            post[i] = v[i];
            continue;
        }
        post[i] += v[i] + post[i + 1];
    }

    multiset<int> mt;
    int sum = pre[n];
    for (int i = 1; i <= n; i++)
    {
        // cout << pre[i] << " ";
        mt.insert(pre[i]);
    }
    // cout << endl;

    int rightmn = 0;
    int rightmx = 0;
    int rightsum = 0;
    int ans = 0;

    if (*(mt.begin()) >= 0)
        ans++;

    for (int i = 1; i < n; i++)
    {
        rightsum += v[i];
        if (i == 1)
        {
            rightmn = rightsum;
            rightmx = rightsum;
        }
        rightmn = min(rightmn, rightsum);
        rightmx = max(rightmx, rightsum);

        mt.erase(mt.find(pre[i]));
        int mn = *(mt.begin());
        mn -= rightsum;
        rightmn += (sum - rightsum);
        rightmx += (sum - rightsum);

        cout << "mn : " << mn << " rightmx : " << rightmx << " rightmn : " << rightmn << endl;
        if (rightmx >= 0 && mn >= 0 && rightmn >= 0)
            ans++;
    }

    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}