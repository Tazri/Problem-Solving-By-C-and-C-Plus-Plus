// link : https://codeforces.com/problemset/problem/1778/C
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

int fcnt(string &a,string &b,set<int> &st){
    int n = a.size();

    int len = 0;
    int ans = 0;
    for(int i = 0;i < n;i++){
        if(a[i] == b[i] || st.count(a[i])){
            len++;
            continue;
        }

        if(len){
            ans += ((len*(len+1))/2);
        }
        len = 0;
    }

    if(len)
        ans += ((len*(len+1))/2);

    return ans;
}

void _DIBBA(int _DIBBA_NO)
{
    int n,k;
    cin >> n >>k ;

    string a,b;
    cin >> a >> b;

    set<char> st;
    for(char ch:a)st.insert(ch);

    string p;
    for(char ch:st)
        p.push_back(ch);

    // cout << p << endl;
    int pw = p.size();

    int ans = 0;
    for(int mask = 0;mask < (1 << pw);mask++){
        int lm = min(k,pw);

        int one = 0;
        int msk = mask;
        while(msk){
            if(msk &1)one++;
            msk >>=1;
        }

        if(one != lm)continue;

        set<int> slt;
        for(int i = 0;i < p.size();i++){
            if(mask & (1 << i))slt.insert(p[i]);
        }

        int total = fcnt(a,b,slt);
        ans = max(ans,total);
    }

    cout << ans << endl;

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