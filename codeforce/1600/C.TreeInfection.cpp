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

void getV(int n, vector<int> &v)
{
    vector<int> input(n + 1, 0);

    for (int i = 0; i < n - 1; i++)
    {
        int fi;
        cin >> fi;
        input[fi]++;
    }

    vector<int> freq(n + 1, 0);

    for (int i = 0; i <= n; i++)
    {
        if (input[i])
            freq[input[i]]++;
    }

    v.reserve(n);

    for (int i = n; i >= 1; i--)
    {
        if (freq[i])
            for (int t = 0; t < freq[i]; t++)
                v.push_back(i);
    }
}

void getReduce(int n, vector<int> &v, vector<int> &left)
{
    int rm = v.size();
    for (int i = 0; i < v.size(); i++)
    {
        v[i] -= rm;
        v[i] = max(0, v[i]);
        rm--;
    }

    for (int i = 0; i < v.size(); i++)
    {
        v[i]--;
        v[i] = max(0, v[i]);
    }

    left.reserve(v.size());
    vector<int> freq(n + 1);

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > 0)
            freq[v[i]]++;
    }

    for (int i = 1; i <= n; i++)
        if (freq[i])
            for (int t = 0; t < freq[i]; t++)
                left.push_back(i);
}

void program()
{
    int n;
    cin >> n;
    vector<int> v;
    getV(n, v);

    // cout << "nodes : " << endl;
    // for (int &vi : v)
    //     cout << vi << " ";
    // cout << endl;

    int ans = v.size() + 1;

    vector<int> left;
    left.reserve(n);
    getReduce(n, v, left);

    // cout << "minimum sec : " << ans << endl;
    // cout << "left : " << endl;
    // for (int li : left)
    //     cout << li << " ";
    // cout << endl;

    int extra = 0;
    // above all gone in o(n)
    // now simulation time

    if (left.size() == 0)
    {
        cout << ans << endl;
        return;
    }

    int rm = 0;
    vector<int> stk;
    stk.reserve(n);

    while (1)
    {
        // initial check
        if (stk.size() && left.size())
        {
            int mx = max(stk.back(), left.back());
            if (mx - rm <= 0)
                break;
        }
        else if (left.back() - rm <= 0)
            break;

        rm++;
        extra++;
        if (stk.size() == 0 || (left.size() && stk.back() < left.back()))
        {
            int mx = left.back();
            left.pop_back();

            if (mx - rm <= 0)
                break;
            mx -= 1;

            if (left.size() == 0)
                left.push_back(mx);
            else if (left.size() || mx >= left.back())
                left.push_back(mx);
            else
                stk.push_back(mx);
            continue;
        }

        int mx = stk.back();
        stk.pop_back();

        if (mx - rm <= 0)
            break;

        mx -= 1;

        if (left.size() == 0 || mx >= left.back())
            left.push_back(mx);
        else
            stk.push_back(mx);
    }

    cout << ans + extra << endl;
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