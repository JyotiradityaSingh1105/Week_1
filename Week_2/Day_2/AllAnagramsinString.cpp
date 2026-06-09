#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> findAnagrams(string s, string p) {
    vector<int> result;
    sort(p.begin(), p.end());
    for (int i = 0; i <= s.length() - p.length(); i++) {
        string temp = s.substr(i, p.length());

        sort(temp.begin(), temp.end());

        if (temp == p) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    string s = "cbaebabacd";
    string p = "abc";
    vector<int> ans = findAnagrams(s, p);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}