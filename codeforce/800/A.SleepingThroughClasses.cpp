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
    string s;
    cin >> s;

    int i = 0;

    int cnt = 0;
    while(i < n){
        if(s[i] == '0'){
            cnt++;
            i++;
            continue;
        }

        int fi = -1;
        for(int j = i+1;j <= min(n-1,i+k);j++){
            if(s[j] == '1'){
                fi= j;
                break;
            }
        }

        if(fi == -1){
            i += k+1;
            continue;
        }

        i = fi;

    }

    cout << cnt << endl;
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