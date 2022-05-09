// https://leetcode.com/problems/merge-intervals/



bool myfunction(vector<int>i,vector<int>j) {
    return (i[0]<j[0]);
}
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
       sort(intervals.begin(),intervals.end(),myfunction);
        vector<vector<int>>ans;
        vector<int>current=intervals[0];
        int i=1;
        while(i<intervals.size()){
            if(current[1]>intervals[i][1]){
//                 do nothing
            }
            else if(current[1]>=intervals[i][0]){
                current[1]=intervals[i][1];
            }
            else{
                ans.push_back(current);
                current=intervals[i];
            }
            i++;
        }
        ans.push_back(current);
        return ans;
    }
};