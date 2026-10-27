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
    int n,k;

    cin >> n >> k;

    vector<int> v(n);
    vector<int> mp(n);
    for(int i = 0;i < n;i++){
        cin >> v[i];

        mp[v[i]] = i;
    }


    k = n-k+1;

    vector<bool> st(n,false);

    for(int i = 0;i < k;i++){
        st[v[i]] = true;
    }

    int index = -1;
    int need = -1;
    for(int i = 0;i < k;i++){
        if(!st[i]){
            need = i;
            break;
        }
    }

    if(need == -1){
        cout << -1 << endl;
        return;
    }

    for(int i = 0;i < k;i++){
        if(v[i] >= k){
            cout << i+1 << " " << mp[need]+1 << endl;
            return;
        }
    }
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