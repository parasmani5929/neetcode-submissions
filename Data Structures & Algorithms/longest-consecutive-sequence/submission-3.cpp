class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        int ans = 0;

        for(int i: nums){
            s.insert(i);
        }

        for(int i: nums){
            if(s.find(i-1) == s.end()){
                int current = i;
                int length = 1;

            while(s.find(current+1) != s.end()){
                current++;
                length++;
            }
            ans = max(ans, length);
            }
             
        }
        return ans;
    }
};
