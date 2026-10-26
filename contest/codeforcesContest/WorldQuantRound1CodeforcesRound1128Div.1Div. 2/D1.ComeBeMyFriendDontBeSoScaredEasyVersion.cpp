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
    int n,m;
    cin>> n >> m;

    vector<pair<int,int>> v;
    if(n == 1){
        cout << 0 <<endl;
        return;
    }

    if(n == 2){
        cout << 1 << endl;
        cout << 1 << " " << 1 << endl;
        return;
    }

    v.push_back({1,2});

    for(int i = 2;i< n;i+=2){
        if(i +2 >=  n)
            v.push_back({i,i+1});
        else v.push_back({i,i+2});
    }

    cout << v.size() << endl;

    for(auto p:v){
        cout << p.first << " " << p.second << endl;
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