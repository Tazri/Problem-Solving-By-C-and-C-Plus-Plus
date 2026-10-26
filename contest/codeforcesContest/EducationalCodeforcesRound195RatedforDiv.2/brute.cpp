#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

string make(string s){
    string ans = "";
    char ch = s[0];

    for(int i = 1;i < s.size();i++){
        if(s[i] != ch){
            ans.push_back(ch);
            ch = s[i];
        }
    }
    ans.push_back(ch);

    return ans;
}

void _DIBBA(int _DIBBA_NO)
{
    string s;
    cin >> s;
    set<string> st;
    st.insert(make(s));
    for(int i = 1;i<s.size()-1;i++){
        s[i] = s[i] == '0' ? '1' : '0';

        st.insert(make(s));

        s[i] = s[i] == '0' ? '1' : '0';
    }

    cout << st.size() << endl;
    
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