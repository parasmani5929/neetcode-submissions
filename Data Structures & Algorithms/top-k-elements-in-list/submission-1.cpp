class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;

        for(int i: nums){
            freq[i]++;
        }
        vector<int> v;

        for(auto it: freq){
            v.push_back(it.first);
        }
        sort(v.begin(), v.end(), [&](int a, int b){ 
        return freq[a] > freq[b];
        });

        vector<int> ans;
        for(int i =0; i<k; i++){
            ans.push_back(v[i]);
        }
        return ans;

    }
};
