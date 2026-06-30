class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++) {
            int k = nums[i];
            int found = 0;

            for(int j = 0; j < nums.size(); j++) {
                if(nums[j] == k) {
                    found++;
                }
            }

            if(found >= 2) {
                return true;
            }
        }
        return false;
    }
};