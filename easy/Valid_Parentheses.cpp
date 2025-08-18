#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    char getPair(char p){
        switch (p){
            case '(':
                return ')';
                break;
            case '[':
                return ']';
                break;
            case '{':
                return '}';
                break;
            default:
                return '0';
        }
    }

    bool isValid(string s) {
        stack<char> left_pairs = {};
        
        for (int i = 0; i < s.size(); i++){            
            if(!left_pairs.empty() && left_pairs.top() == s[i]){
                left_pairs.pop();
            } else {
                char pair = getPair(s[i]);
                if(pair == '0'){
                    return false;
                }
                left_pairs.push(pair);
            }
        }
        
        return left_pairs.size() == 0;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string parentheses;
    cin >> parentheses;

    cout << Solution().isValid(parentheses);

    return 0;
}