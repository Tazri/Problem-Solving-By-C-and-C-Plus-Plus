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
    vector<int> v(n);
    int zero = 0;
    for(int i = 0;i < n;i++){
        cin >> v[i];
        if(!v[i])zero++;
    }

    if(zero <2){
        cout << -1 << endl;
        return;
    }

    if(v.front() == 0 && v.back() == 0){
        cout << 0 << endl;
    }else if(v.front() == 0 || v.back() == 0){
        cout << 1 << endl;
    }else{
        cout << 2 << endl;
        
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