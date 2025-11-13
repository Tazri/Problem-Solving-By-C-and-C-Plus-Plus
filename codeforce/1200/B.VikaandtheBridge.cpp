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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int &vi : v)
        cin >> vi;

    vector<int> mxsteptime(k + 1, 0);
    vector<int> mxstep(k + 1, 1);
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        if (mp.count(v[i]) == 0)
        {
            mp[v[i]] = i;
            mxstep[v[i]] = i + 1;
            mxsteptime[v[i]] = 1;
            continue;
        }

        int li = mp[v[i]];
        int step = i - li;
        mp[v[i]] = i;
        // mxstep[v[i]] = max(mxstep[v[i]], step);

        if (mxstep[v[i]] == step)
            mxsteptime[v[i]]++;
        else if (step > mxstep[v[i]])
        {
            mxstep[v[i]] = step;
            mxsteptime[v[i]] = 1;
        }
    }

    vector<int> checked(k + 1, false);
    reverse(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        if (checked[v[i]])
            continue;
        checked[v[i]] = true;
        int step = i + 1;

        if (mxstep[v[i]] == step)
            mxsteptime[v[i]]++;
        else if (step > mxstep[v[i]])
        {
            mxstep[v[i]] = step;
            mxsteptime[v[i]] = 1;
        }
    }

    int mn = n;

    for (int i = 1; i <= k; i++)
    {
        cout << "i : " << i << " mxstep : " << mxstep[i] << " time : " << mxsteptime[i] << endl;
        mxstep[i]--;

        int step = mxstep[i];
        int h = step / 2;
        if (step < mn)
        {
            cout << "mn : " << mn << " h " << h << endl;
            if (mxsteptime[i] == 1)
                mn = h;
            else
                mn = step;
            continue;
        }

        cout << "h : " << h << endl;
        if (mxsteptime[i] == 1 && h < mn)
            mn = h;
    }

    cout << mn << endl;
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