class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_set<char> store;
        int left = 0;
        int result = 0;

        for (int right = 0; right < s.size(); right++) {

            while (store.find(s[right]) != store.end()) {
                store.erase(s[left]);
                left++;
            }

            store.insert(s[right]);
            result = max(result, right - left + 1);
        }

        return result;
    }
};