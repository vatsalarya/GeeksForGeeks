https://leetcode.com/problems/find-the-duplicate-number/


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int j=0;
        while(i<nums.size()){
            if(i==nums.size()-1 || nums[i]!=nums[i+1]){
                nums[j]=nums[i];
                j++;
            }
            i++;
        }
        return j;
    }
};