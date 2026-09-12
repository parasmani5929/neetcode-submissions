class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if(n == 0) return 0;
        int left = 0, max_len = -1;
        unordered_set<char> seen;

        for(int right = 0; right < n; right++){
            while(seen.count(s[right])){
                seen.erase(s[left]);
                left++;
            }
            seen.insert(s[right]);
            max_len = max(max_len, right-left+1);
        }  
        return max_len;           
    }
};
