// https://leetcode.com/problems/subarray-sums-divisible-by-k/


// Time limit exceeded

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int ans=0;
        long long sum=0;
        vector<long long> sums;
        for(int i=0;i<nums.size();i++){
            sums.push_back(sum);
            sum+=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                if((sums[j]-sums[i]+nums[j])%k==0){
                    ans++;
                }
            }
        }
        return ans;
    }
};