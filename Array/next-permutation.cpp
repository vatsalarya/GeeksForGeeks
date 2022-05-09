// https://leetcode.com/problems/next-permutation/submissions/


vector<int> swap(vector<int> A, int i, int j){
    int temp=A[i];
    A[i]=A[j];
    A[j]=temp;
    return A;
}
vector<int> reverse(vector<int> A, int i, int j){
    while(i<j) 
        A=swap(A,i++,j--);
    return A;
}

class Solution {
public:
    void nextPermutation(vector<int>& A) {
        if(A.size() <=1)
            return;
        int i=A.size()-2;
        while(i>=0 && A[i]>=A[i+1]){
            i--;
        }
        if(i>=0){
            int j=A.size()-1;
            while(A[j]<=A[i]){
                j--;
            }
            A=swap(A,i,j);
        }
        A=reverse(A,i+1,A.size()-1);
    }
};
