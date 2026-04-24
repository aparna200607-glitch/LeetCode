class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> m(128, -1);
        int left = 0, right = 0;
        int res = 0;
        int n = s.length();

        while (right < n) {
            char r = s[right];

            int index = m[r];
            if (index != -1 && index >= left) {
                left = index + 1;

            }

            res = max(res, right - left + 1);
            m[r] = right;
            right++;
        }

        return res;
    }
};