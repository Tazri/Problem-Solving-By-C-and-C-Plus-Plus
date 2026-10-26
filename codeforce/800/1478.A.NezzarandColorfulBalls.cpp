// link : https://codeforces.com/problemset/problem/1478/A
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
    int cnt = 1;
    int mx = 1;
    vector<int> v(n);

    for(int i = 0;i< n;i++)
        cin>>v[i];

    for(int i = 1;i< n;i++){
        if(v[i] == v[i-1]){
            cnt++;
        }else{
            mx = max(mx,cnt);
            cnt=1;
        }
    }
    mx = max(mx,cnt);

    cout<< mx << endl;
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