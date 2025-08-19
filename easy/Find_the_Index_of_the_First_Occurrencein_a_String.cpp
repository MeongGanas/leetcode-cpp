#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int needleSize = needle.size();

        for (int i = 0; i < haystack.size(); i++){
            string substring = haystack.substr(i, needleSize);
            
            if (substring == needle){
                return i;
            }
        }

        return -1;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string haystack;
    cin >> haystack;

    string needle;
    cin >> needle;

    cout << Solution().strStr(haystack, needle);

    return 0;
}