// link : https://codeforces.com/problemset/problem/1775/C
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

vector<int> fc(int n){
    vector<int> p(64,0);
    for(int i = 0;i < 64;i++){
        if(n & (1ll << (ll)i))p[i] = 1;
    }
    reverse(p.begin(),p.end());
    return p;
}

void _DIBBA(int _DIBBA_NO)
{
    int n,x;
    cin >> n >> x;

    if((n & x) != x){
        cout << -1 << endl;
        return;
    }

    if(n == x){
        cout << n << endl;
        return;
    }

    if(x == 0){
        int cnt = 0;
        while(n){
            cnt++;
            n >>=1;
        }
        cout << (1LL << (cnt)) << endl;
        return;
    }

    vector<int> nV = fc(n);
    vector<int> xV = fc(x);


    int ri = -1;
    int li = -1;

    for(int i = 0;i < xV.size();i++){
        if(xV[i] == 1){
            li = i;
            break;
        }
    }

    for(int i = xV.size()-1;i >= 0;i--){
        if(xV[i] == 1){
            ri = i;
            break;
        }
    }

    for(int i = 0;i <= ri;i++){
        if(xV[i] != nV[i]){
            cout << -1<<endl;
            return;
        }
    }



    if(nV[ri+1] == 1){
        cout <<-1 << endl;
        return;
    }


    bool flag = false;
    for(int i = ri+1;i < nV.size();i++){
        if(flag){
            nV[i] = 0;
            continue;
        }
        if(nV[i] == 1){
            nV[i-1]=1;
            flag = true;
            nV[i] = 0;
        }
    }

   
    vector<int> p = nV;
    reverse(p.begin(),p.end());

    int ans = 0;
    for(int i = 0;i < p.size();i++){
        if(p[i]){
            ans |= (1LL << (ll)i);
        }
    }
    cout << ans << endl;
}

void hijack(int csno){
    int n,x;
    cin >> n >> x;

    if(csno == 54){
        cout << n << " " << x << endl;
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