#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<vector<string>> GroupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> mp;

    for (int i = 0; i < strs.size(); i++) {
        string key = strs[i];
        sort(key.begin(), key.end());
        mp[key].push_back(strs[i]);
    }
    vector<vector<string>> result;
    for (auto it = mp.begin(); it != mp.end(); it++) {
        result.push_back(it->second);
    }
    return result;
}

int main() {
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> ans = GroupAnagrams(strs);
    for (int i = 0; i < ans.size(); i++) {
        cout << "[ ";
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}