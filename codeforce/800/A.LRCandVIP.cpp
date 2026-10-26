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
    
    set<int>st;
    for(int i =0;i < n;i++){
        cin >> v[i];

        st.insert(v[i]);
    }

    if(st.size() <=1){
        cout <<"NO" << endl;
        return;
    }

    cout <<"YES" << endl;
    int x1 = *st.begin();
    st.erase(x1);
    int x2 = *st.rbegin();

    for(int i =0;i < n;i++){
        int pr;

        if(v[i] == x2){
            pr =1 ;
        }else{
            pr = 2;
        }

        cout << pr << " \n"[i == n-1];
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