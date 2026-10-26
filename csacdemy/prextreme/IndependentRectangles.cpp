#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;

#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()      \
        ios_base::sync_with_stdio(0); \
        cin.tie(0);                   \
        cout.tie(0);                  \
        
void Program(int caseno){
    int n;
    cin >> n;
    int sz = (int)(1e6);
    vector<vector<int>> v((sz+123));
    multiset<int> mt;
    for(int i = 0;i < n;i++){
        int w,h;
        cin >> w >> h;
        v[w].push_back(h);
        mt.insert(h);
    }
    
    int ans = 0;
    for(int i = 1;i <= sz;i++){
        
        vector<int> slt;
        for(int hi:v[i]){
            slt.push_back(hi);
            mt.erase(mt.find(hi));
        }
        


        for(int hi:slt){
            if(mt.size() == 0 || (*mt.rbegin()<= hi)){
                ans++;
            }
        }
    }
    
    cout << ans << endl;
}

int32_t main(){
    _GORIBER_TURBO_MODE_ON();
    
    int t = 1;
    // cin >> t;
    
    for(int i = 1;i <= t;i++){
        Program(i);
    }
    
    return 0;
}