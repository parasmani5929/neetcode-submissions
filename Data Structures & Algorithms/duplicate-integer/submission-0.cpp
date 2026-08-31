class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        int n = nums.size();

        for(int i: nums){
            if(s.find(i) != s.end()){
                return true;
            }
            s.insert(i);
        }
        return false;
    }
};