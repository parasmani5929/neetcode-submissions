class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();

        int st = 0, end = n-1;
        int max_area = 0;

        while(st < end){
            int area = min(heights[st], heights[end]) * abs(st - end);
            max_area = max(area, max_area);

            if(heights[st] < heights[end]){
                st++;
            }
            else{    //height[st] > height[end]
                end--;
            }
        }
        return max_area;
    }
};
