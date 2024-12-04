// links : https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence/
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield)

class Solution {
public:
    int canMakeArithmeticProgression(vector<int>& arr) {
        if(arr.size() <= 2) return true;
       
        sort(arr.begin(),arr.end());


        int diff = arr[0] - arr[1];
        for(int i = 2;i < arr.size();i++){
            if(arr[i-1] - arr[i] != diff) return false;
        }

        return true;
    }
};

int main()
{
    optimize();

    vector <int>arr = {3,5,1};

    Solution *test = new Solution();

    int res = test->canMakeArithmeticProgression(arr);

    cout << res << endl;

    return 0;
}