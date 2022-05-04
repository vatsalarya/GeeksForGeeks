// https://practice.geeksforgeeks.org/problems/reverse-a-string/1
//User function Template for C++

string reverseWord(string str){
    for(int i=0;i<str.length()/2;i++){\
        int temp;
        temp=str[i];
        str[i]=str[str.length()-i-1];
        str[str.length()-i-1]=temp;
    }
    cout<<str;
  //Your code here
}