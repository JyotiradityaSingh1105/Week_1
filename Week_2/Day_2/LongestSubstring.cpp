#include <iostream>
using namespace std;

int lengthOfLongestSubstring(string s) {
    int maxLength = 0;

    for (int i = 0; i < s.length(); i++) {
        string temp = "";
        for (int j = i; j < s.length(); j++) {
            bool duplicate = false;
          for (int k = 0; k < temp.length(); k++) {
               if (temp[k] == s[j]) {
                    duplicate = true;
                    break;
                }
            }
            if (duplicate) {
                break;
            }
          temp += s[j];
        }
        if (temp.length() > maxLength) {
            maxLength = temp.length();
        }
    }
   return maxLength;
}

int main() {
    string s = "abcabcbb";
    cout << lengthOfLongestSubstring(s);

    return 0;
}
