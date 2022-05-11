// https://leetcode.com/problems/move-zeroes/


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        int j=0;
        while(j<nums.size()){
            if(nums[j]==0){
                j++;
            }
            else{
                nums[i]=nums[j];
                i++;
                j++;
            }
        }
        while(i<nums.size()){
            nums[i]=0;
            i++;
        }
    }
};