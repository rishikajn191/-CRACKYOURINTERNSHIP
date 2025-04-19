class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area = 0;
        int l = 0;
        int r = height.size()-1;
        while(l<r){
            int wide = r-l; // width
            int high = min(height[l],height[r]);    //height
            int area = wide * high; //current area
        
            max_area = max(max_area, area); // updating the max area

            if(height[l] < height[r])
                l++;
            else
                r--;
        }
        return max_area;

    }
};
