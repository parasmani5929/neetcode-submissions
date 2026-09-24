class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = *max_element(piles.begin(), piles.end());

        while(low < high){
            int mid = low + (high-low)/ 2;
            long long k = 0;

            for(int i: piles){
                k += (i + mid - 1)/mid;
            }
            if(k <= h){
                high = mid;
            }
            else{
                low = mid + 1;
            }

        }
        return low;
    }
};
