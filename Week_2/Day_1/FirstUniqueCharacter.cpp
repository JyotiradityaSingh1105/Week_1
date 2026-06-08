#include <iostream>
using namespace std;
int firstUniqueChar(string s) {
    for (int i = 0; i < s.length(); i++) {
        int count = 0;
        for (int j = 0; j < s.length(); j++) {
            if (s[i] == s[j]) {
                count++;
            }
        }
        if (count == 1) {
            return i;
        }
    }
   return -1;
}

int main() {
    string s = "loveleetcode";

    cout << firstUniqueChar(s);

    return 0;
}