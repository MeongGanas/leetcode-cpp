#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> dict = {};

        for (int i = 0; i < nums.size(); i++){
            int minus = target - nums[i];
            if (dict.count(minus)){
                return {dict[minus], i};
            } else {
                dict.insert({nums[i], i});
            }
        }

        return {};
    }
};

int main(){
    Solution sol;
    vector<int> masukan = {2, 7, 11, 15};
    int target = 9;

    vector<int> hasil = sol.twoSum(masukan, target);

    cout << "Hasil: [";
    for (int i = 0; i < hasil.size(); ++i) {
        cout << hasil[i];
        if (i < hasil.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}