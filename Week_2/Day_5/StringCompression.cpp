#include <iostream>
#include <vector>
using namespace std;

int stringcompression(vector<char>& chars) {
    int i = 0;
    int index = 0;
    while (i < chars.size()) {
        char current = chars[i];
        int count = 0;
        while (i < chars.size() && chars[i] == current) {
            count++;
            i++;
        }

        chars[index++] = current;
        if (count > 1) {
            string cnt = to_string(count);

            for (int j = 0; j < cnt.size(); j++) {
                chars[index++] = cnt[j];
            }
        }
    }
    return index;
}

int main() {
    vector<char> chars = {'a','a','b','b','c','c','c'};
    int len = stringcompression(chars);
    cout << "New Length = " << len << endl;
    cout << "Compressed Str: ";
    for (int i = 0; i < len; i++) {
        cout << chars[i] << " ";
    }

    return 0;
}