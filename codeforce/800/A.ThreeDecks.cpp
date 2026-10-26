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
    int a,b,c;
    cin >>a >> b>> c;
    
    if((a+b+c)%3 != 0){
        cout << "NO" << endl;
        return;
    }

    int d = (a+b+c)/3;

    if(a > d || b > d){
        cout <<"NO" << endl;
        return;
    }

    cout <<"YES" << endl;
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