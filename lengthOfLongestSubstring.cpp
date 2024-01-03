#include <string>
#include <map>

class Solution {
public:
    static int lengthOfLongestSubstring(std::string s) {
        int l, len = 0;
        std::map<char, int> sub;

        for (int r = 0; r < s.length(); r++) {
            // Ensure unique char set of sliding window by
            // decreasing left pointer.
            while (sub.count(s[r]) != 0) {
                sub.erase(s[l]);
                l++;
            }

            // When charset is unique, add right pointer to
            // charset and calculate size of window.
            sub[s[r]] = r;
            len = std::max(len, r - l);
        }

        return len;
    }
};

