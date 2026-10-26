#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;

    map<int,int> mp;
    int mx =0;
    int odd =0;
    int eodd = 0;
    int oodd = 0;
    for(int i = 0;i  < n;i++){
        int vi;
        cin >> vi;

        if(vi & 1)odd++;else{
            int h = vi /2;

            if(h & 1)oodd++;
            else eodd++;
        }
    }

    cout << max({eodd,oodd,odd}) << endl;
    
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