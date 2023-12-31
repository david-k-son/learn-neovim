// refactor s[i] - 'a' into: int idx = s[i] - 'a';

class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        vector<int> letters(26, -1);
        int res = -1;
        for (int i = 0; i < s.size(); i++) {
            if (letters[s[i] - 'a'] != -1) {
                res = max(res, i - letters[s[i] - 'a'] - 1);
            }
            else {
                letters[s[i] - 'a'] = i;
            }
        }
        return res;
    }
};
