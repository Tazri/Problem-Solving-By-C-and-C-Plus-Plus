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
    vector<int> a(n);
    vector<int> b(n);
    vector<int> ans;
    for(int i = 0;i < n;i++){
        cin >> a[i];
        b[i] = a[i];
    }

    sort(b.begin(),b.end());

    for(int i = 0;i < n;i++){
        if(a[i]== b[i])continue;

        ans.push_back(a[i]);
    }

    if(ans.size() <= 0){
        cout <<"NO" << endl;
        return;
    }

    cout <<"YES" << endl;
    cout <<ans.size() << endl;
    for(int i = 0;i < ans.size();i++)
        cout << ans[i] << " \n"[i == ans.size()-1];
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