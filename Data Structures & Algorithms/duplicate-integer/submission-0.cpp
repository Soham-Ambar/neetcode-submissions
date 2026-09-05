class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int l = 0;
        int r = 1;
        while (r < n) {
            if (nums[l] == nums[r]) {
                return true;
            }
            l++;
            r++;
        }
        return false;
    }
};