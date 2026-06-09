#include <iostream>
#include <algorithm>
using namespace std;

bool PermutationInStr(string s1, string s2) {
    int n1 = s1.length();
    int n2 = s2.length();
    sort(s1.begin(), s1.end());
    for (int i = 0; i <= n2 - n1; i++) {
          string temp = s2.substr(i, n1);

        sort(temp.begin(), temp.end());

        if (temp == s1) {
            return true;
        }
    }
    return false;
}

int main() {
    string s1 = "ab";
    string s2 = "eidbaooo";

    if (PermutationInStr(s1, s2))
        cout << "true";
    else
        cout << "false";

    return 0;
}