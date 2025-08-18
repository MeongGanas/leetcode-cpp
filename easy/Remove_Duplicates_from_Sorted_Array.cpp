#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // vector<int> seen = {};

        // for(int i = 0; i < nums.size(); i++){
        //     auto it = find(seen.begin(), seen.end(), nums[i]);
        //     bool already_seen = it != seen.end();
            
        //     if (!already_seen){
        //         seen.push_back(nums[i]);
        //     } else {
        //         nums.erase(nums.begin() + (i));
        //         i -= 1;
        //     }
        // }

        // cout << "Nums: [";
        // for (int num: nums){
        //     cout << num << ',';
        // }
        // cout << "]" << endl;

        // return seen.size();

        int l = 0;

        for(int r = 1; r< nums.size();r++) {
            if(nums[r] == nums[l]) {
                continue;
            }
            l++;
            nums[l] = nums[r];
        }

        cout << "Nums: [";
        for (int num: nums){
            cout << num << ',';
        }
        cout << "]" << endl;

        return l+1;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string nums;
    cin >> nums;
    
    vector<int> result;
    stringstream ss(nums);
    string segment;

    while(getline(ss, segment, ',')) {
       result.push_back(stoi(segment));
    }

    cout << Solution().removeDuplicates(result);

    return 0;
}