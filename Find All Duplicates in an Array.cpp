// https://leetcode.com/problems/find-all-duplicates-in-an-array/



class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
         vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[(nums[i]>0?nums[i]:-nums[i])-1]>0){
                nums[(nums[i]>0?nums[i]:-nums[i])-1]*=-1;
            }
            else{
                ans.push_back(nums[i]>0?nums[i]:-nums[i]);
            }
        }
        return ans;
    }
};