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

    vector<string> v(2);

    cin >> v[0];
    cin >> v[1];

    string s(n,' ');

    for(int i = 0;i < n;i++){
        if(v[0][i] == v[1][i]){
            s[i] = '1';
        }else{
            s[i] = '0';
        }
    }
    
    int ans = 0;
    for(int i = 0;i < n;i++){
        if(s[i] == '0')ans++;
    }



    cout << (ans%2) << endl;
    
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