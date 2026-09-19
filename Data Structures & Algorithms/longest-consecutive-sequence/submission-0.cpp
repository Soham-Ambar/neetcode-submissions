class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        unordered_set<int> s(nums.begin(), nums.end());
        int longestStreak = 0;
        for (int num : s) {
            // Only start counting if 'num' is the beginning of a sequence
            if (!s.count(num - 1)) {
                int currentNum = num;
                int currentStreak = 1;
                while (s.count(currentNum + 1)) {
                    currentNum++;
                    currentStreak++;
                }
                longestStreak = max(longestStreak, currentStreak);
            }
        }
        return longestStreak;
    }
};
