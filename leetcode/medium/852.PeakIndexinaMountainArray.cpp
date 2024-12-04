// links : https://leetcode.com/problems/peak-index-in-a-mountain-array/
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield)

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l = 0;
        int r = arr.size()-1;

        while(l < r){
            int mid = (l+r) /2;

            if(arr[mid] > arr[mid+1]){
                r = mid;
            }else{
                l = mid+1;
            }
        }


        return l;
    }
};

int main()
{
    optimize();

    vector <int>arr = {18,29,38,59,98,100,99,98,90};

    Solution *test = new Solution();

    int res = test->peakIndexInMountainArray(arr);

    cout << res << endl;

    return 0;
}