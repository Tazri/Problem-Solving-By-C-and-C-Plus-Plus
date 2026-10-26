// link : https://codeforces.com/problemset/problem/1886/C
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
    string s;
    cin >> s;
    int n = s.size();

    int k;
    cin >> k;
    vector<int> vl(n);

    for(int i= 0;i < n;i++){
        vl[i] = n-i;
    }

    int pre =0;
    int rm= 0;
    int pos;
    for(int i = 0;i < n;i++){
        

        if(pre +vl[i]>= k){
            rm = i;
            pos = k - pre;
            break;
        }   
        pre += vl[i];
    }

    string ans;
    ans.reserve(n);

    for(char ch:s){
        if(rm <= 0 || ans.size() <= 0 || ans.back() <= ch){
            ans.push_back(ch);
            continue;
        }

        while(rm > 0 && ans.size() > 0 && ans.back() > ch){
            ans.pop_back();
            rm--;
        }

        ans.push_back(ch);
    }

    cout << ans[pos-1];
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}