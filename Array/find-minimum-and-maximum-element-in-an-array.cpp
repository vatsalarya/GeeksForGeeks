// https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/
vector<int> separateNegativeAndPositive(vector<int> &nums){

    // Write your code here.
		int i=0;
		int j=0;
		while(i<=j){
			if(nums[i]<0){
				int temp=nums[i];
				nums[i]=nums[j];
				i++;
				j++
			}
			else{
				j++;
			}
		}
}