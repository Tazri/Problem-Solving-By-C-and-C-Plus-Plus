// link: https://cses.fi/problemset/task/1076
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

class Median
{
public:
    multiset<int> mt;
    multiset<int>::iterator mid;

    void insert(int num)
    {
        if (mt.size() == 0)
        {
            mt.insert(num);
            mid = mt.begin();
            return;
        }

        mt.insert(num);

        if (mt.size() % 2 == 0)
        {
            if (num < *mid)
                mid--;
            return;
        }

        if (num >= *mid)
            mid++;
    }

    void remove(int rm)
    {
        if (*mid == rm && mt.size() == 1)
        {
            mt.erase(rm);
            mid = mt.begin();
            return;
        }

        if (rm != *mid)
        {
            mt.erase(mt.find(rm));

            if (mt.size() % 2 == 0)
            {
                if (rm > *mid)
                    mid--;
            }
            else
            {
                if (rm < *mid)
                    mid++;
            }

            return;
        }

        // *mid == rm
        if (mt.size() == 2)
        {
            mt.erase(mid);
            mid = mt.begin();
            return;
        }

        if (mt.size() & 1)
        {
            auto new_mid = prev(mid);
            mt.erase(mid);
            mid = new_mid;
            return;
        }

        auto new_mid = next(mid);
        mt.erase(mid);
        mid = new_mid;
        return;
    }
};

void program()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    vector<ll> ans;
    ans.reserve(n);

    for (ll i = 0; i < n; i++)
        cin >> v[i];

    Median mt;

    for (int i = 0; i < k; i++)
        mt.insert(v[i]);

    ans.push_back(*mt.mid);

    for (int l = 0, r = k; r < n; r++, l++)
    {
        mt.remove(v[l]);
        mt.insert(v[r]);
        ans.push_back(*mt.mid);
    }

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " \n"[i == ans.size() - 1];
}

int main()
{
    optimize();
    program();
    return 0;
}