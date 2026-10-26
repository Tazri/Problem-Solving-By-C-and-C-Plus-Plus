#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'
#define int ll
#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i = 0;i < n;i++){
        cin >> v[i];
    }

    int mx = v[0];
    int preMx = mx;
    int preMn = v[0];
    for(int i = 1;i < n;i++){
        int vi = v[i];
        vector<int> canBe = {
            vi,
            vi+preMx,
            vi-preMx,
            vi+preMn,
            vi-preMn
        };

            

        int x = *max_element(canBe.begin(),canBe.end());

        mx = max(x,mx);


        vector<int> nextPre = {
            preMn + vi,
            preMx + vi,

            preMn + (vi - preMn),
            preMn + (vi + preMn),

            preMx + (vi - preMx),
            preMx + (vi + preMx)
        };

        preMn = *min_element(nextPre.begin(),nextPre.end());
        preMx = *max_element(nextPre.begin(),nextPre.end());
        
    }

    cout << mx << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    cin >> t;

    for(int i = 1;i <= t;i++)
        _DIBBA(i);

    return 0;
}