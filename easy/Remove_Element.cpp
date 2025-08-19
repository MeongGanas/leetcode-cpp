#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0; 
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }
        
        return k;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string nums;
    cin >> nums;

    int val;
    cin >> val;
    
    vector<int> result;
    stringstream ss(nums);
    string segment;

    while(getline(ss, segment, ',')) {
       result.push_back(stoi(segment));
    }

    cout << Solution().removeElement(result, val);

    return 0;
}