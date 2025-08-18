#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getNum(char ch){
        switch(ch){
            case 'I':
                return 1;
                break;
            case 'V':
                return 5;
                break;
            case 'X':
                return 10;
                break;
            case 'L':
                return 50;
                break; 
            case 'C':
                return 100;
                break;
            case 'D':
                return 500;
                break;
            case 'M':
                return 1000;
                break; 
        }
        return 0;
    }

    int romanToInt(string s) {
        // atau pakai map
        // map<char, int> symbols = {
        //     {'I', 1},
        //     {'V', 5},
        //     {'X', 10},
        //     {'L', 50},
        //     {'C', 100},
        //     {'D', 500},
        //     {'M', 1000}
        // };

        int res = 0;
        int string_length = s.size()-1;

        for(int i = 0; i < string_length; i++){
            char current_symbol = s[i];
            char next_symbol = s[i+1];

            if (getNum(current_symbol) >= getNum(next_symbol)){
                res += getNum(current_symbol);
            } else {
                res -= getNum(current_symbol);
            }
        }

        res += getNum(s[string_length]);

        return res;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string roman;
    cin >> roman;

    cout << Solution().romanToInt(roman);

    return 0;
}