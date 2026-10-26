// link : https://codeforces.com/problemset/problem/1730/B
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

#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield)

pair<int,int> f(vector<int> &v,vector<int> &vt,int t){
    int n = v.size();
    int mnR = 0;
    int mxL = 0;
    for(int i = 0;i < n;i++){
        int x = t-vt[i];

        int l = v[i]-x;
        int r= v[i]+x;

        if(i == 0){
            mnR = r;
            mxL = l;
        }

        mxL = max(mxL,l);
        mnR = min(mnR,r);
    }

    int l = mxL;
    int r = mnR;

    if(l > r)return {-1,-1};
    return {l,r};
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> vt(n);
    
    for(int i = 0;i < n;i++){
        cin >> v[i];
    }

    int mx = 0;
    for(int i = 0;i < n;i++){
        cin >> vt[i];
        mx = max(vt[i],mx);
    }

    int l = mx;
    int r = 1e15;
    pair<int,int> ans;
    while(l<= r){
        int mid = l + (r-l)/2;

        pair<int,int> res = f(v,vt,mid);

        if(res.first == -1){
            l = mid+1;
        }else{
            ans = res;
            r = mid-1;
        }
    }

    double a = (double)(ans.first+ans.second)/2.0;

    cout << a << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();
    fraction();
    int t = 1;
    cin >> t;
    for(int i = 1;i <= t;i++)
        _DIBBA(i);
    return 0;
}