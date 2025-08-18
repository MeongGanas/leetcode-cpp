#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string first_word = strs[0];

        if (first_word == ""){
            return "";
        }

        string res = "";
        int strs_length = strs.size();

        for (int i = 0; i < first_word.length(); i++){
            char current_char = first_word[i];

            for (int j = 1; j < strs_length; j++){
                if (strs[j][i] != current_char){
                    return res;
                }
            }

            res += current_char;
        }

        return res;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<string> strs(n);
    for (int i = 0; i < n; ++i) {
        cin >> strs[i];
    }

    cout << Solution().longestCommonPrefix(strs);

    return 0;
}