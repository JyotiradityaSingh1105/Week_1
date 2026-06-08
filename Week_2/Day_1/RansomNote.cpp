#include <iostream>
using namespace std;

bool RanSomeNote(string ransomNote, string magazine) {

    for (int i = 0; i < ransomNote.length(); i++) {
        bool found = false;
        for (int j = 0; j < magazine.length(); j++) {
            if (ransomNote[i] == magazine[j]) {
                found = true;
                magazine[j] = '@'; 
                break;
            }
        }
        if (!found) {
            return false;
        }
    }
   return true;
}

int main() {
    string ransomNote = "aa";
    string magazine = "aab";
    if (RanSomeNote(ransomNote, magazine))
        cout << "true";
    else
        cout << "false";

    return 0;
}