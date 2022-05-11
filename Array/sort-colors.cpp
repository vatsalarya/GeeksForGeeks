// https://leetcode.com/problems/sort-colors/



class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0;
        int mid=0;
        int j=nums.size()-1;
        while(mid<=j){
            if(nums[mid]==0){
                int temp=nums[i];
                nums[i]=nums[mid];
                nums[mid]=temp;
                i++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                int temp=nums[j];
                nums[j]=nums[mid];
                nums[mid]=temp;
                j--;
            }
        }
    }
};