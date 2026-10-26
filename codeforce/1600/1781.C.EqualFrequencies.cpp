// link : https://codeforces.com/problemset/problem/1781/C
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int f(vector<pair<int,char>> &v,int d,int n){
    if(n/d > ((int)'z'-(int)'a'+1))
        return -1;

    int can = n/d;
    int change = 0;
    for(int i = 0;i < v.size() && i < can;i++){
        int has = v[i].first;

        if(has > d)
            change += (has-d);
    }

    for(int i = can;i < v.size();i++){
        change += v[i].first;
    }

    return change;
}


void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    map<char,int> mp;
    string s;
    cin >> s;

    for(char ch:s)
        mp[ch]++;

    vector<pair<int,char>> v;

    for(pair<char,int> p:mp)
        v.push_back({p.second,p.first});

    sort(v.rbegin(),v.rend());

    

    vector<int> vd;
    for(int i = 1;i*i <= n;i++){
        if(n% i != 0)continue;

        vd.push_back(i);

        if(n/i != i)vd.push_back(n/i);
    }

    int mn = -1;
    int slt;
    for(int d:vd){
        int ans = f(v,d,n);
        if(ans == -1)
            continue;

        if(mn == -1){
            mn = ans;
            slt = d;
        }

        if(ans < mn){
            mn = ans;
            slt =d;
        }
    }  



    int d = slt;
    int chCnt = n/d;

    while(v.size() > chCnt){
        v.pop_back();
    }

    for(int i = 0;i < v.size();i++){
        v[i].first = d;
    }



    vector<char> stk;

    if(v.size() < chCnt){
        set<char> st;
        for(int i = 0;i< v.size();i++)
            st.insert(v[i].second);

        int need = chCnt-v.size();
        for(char ch = 'a',i = 0;i < need && ch <= 'z';ch++){
            if(st.count(ch)) 
                continue;
            i++;
            v.push_back({d,ch});
        }
    }

    mp.clear();

    for(auto p:v){
        mp[p.second] = p.first;
    }

    vector<bool> done(n,false);

    for(int i =0;i < n;i++){
        char ch = s[i];

        if(mp[ch] <= 0)
            continue;

        mp[ch]--;
        if(mp[ch] ==0)
            mp.erase(ch);
        done[i] = true;
    }

    vector<char> left;
    left.reserve(n);
    for(pair<char,int> p:mp){
        for(int ti = 0;ti < p.second;ti++)
            left.push_back(p.first);
    }

    for(int i = 0;i < n;i++)
        if(!done[i]){
            s[i] = left.back();
            left.pop_back();
        }
    
    cout << mn << endl;
    cout <<s << endl;
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