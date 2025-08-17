#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0){
            return false;
        }
        
        string textNumber = to_string(x);
        string backwards = "";
        int text_length = textNumber.length();

        for (int i = text_length - 1; i >= 0; i--){
            backwards += textNumber[i];
        }

        return textNumber == backwards;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int num;
    cin >> num;

    if(Solution().isPalindrome(num)){
        cout << "yes";
    } else {
        cout << "no";
    }

    return 0;
}