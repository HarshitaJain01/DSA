//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
	public:
		string is_palindrome(int n)
		{
		    int nn=n;
            int r = 0;
            int t;
            while(n>0){
                t = n%10; 
                r = r*10+t;
                n=n/10;
            }
            if(nn==r){
                cout<<"Yes";
            }
            else{
                cout<<"No";
            }
            
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends
