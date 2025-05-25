// link : https://codeforces.com/problemset/problem/528/A
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
    ll w, h, n;
    cin >> w >> h >> n;
    multiset<ll> hCut, vCut, widthGap, heightGap;

    hCut.insert(0);
    hCut.insert(h);
    vCut.insert(0);
    vCut.insert(w);

    widthGap.insert(w);
    heightGap.insert(h);

    for (ll i = 0; i < n; i++)
    {
        char t;
        ll p;
        cin >> t >> p;

        if (t == 'H')
        {
            ll prevCut = *prev(hCut.lower_bound(p));
            ll nextCut = *hCut.upper_bound(p);

            ll prevGap = nextCut - prevCut;

            ll g1 = p - prevCut;
            ll g2 = nextCut - p;

            multiset<ll>::iterator it = heightGap.find(prevGap);
            heightGap.erase(it);
            heightGap.insert(g1);
            heightGap.insert(g2);
            hCut.insert(p);
        }
        else if (t == 'V')
        {
            ll prevCut = *prev(vCut.lower_bound(p));
            ll nextCut = *vCut.upper_bound(p);

            ll prevGap = nextCut - prevCut;

            ll g1 = p - prevCut;
            ll g2 = nextCut - p;

            multiset<ll>::iterator it = widthGap.find(prevGap);
            widthGap.erase(it);
            widthGap.insert(g1);
            widthGap.insert(g2);
            vCut.insert(p);
        }

        ll maxWidth = *widthGap.rbegin();
        ll maxHeight = *heightGap.rbegin();

        cout << maxWidth * maxHeight << endl;
    }
}

int main()
{
    optimize();
    program();
    return 0;
}