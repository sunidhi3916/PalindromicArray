#include<iostream>
#include<string.h>
using namespace std;

//function
class Solution {
public:
    int PalinArray(int a[], int n)
    {
    	// code here
    		int rev[n]={0};
    		int count=0;
    
    	for(int i=0;i<n;i++)
    	{
    	    int rem=0;
    	    int temp=a[i];
    
    	    while(a[i]!=0)
    	    {
    	        rem=a[i]%10;
    	        rev[i]=rev[i]*10+rem;
    	        a[i]=a[i]/10;
    	    }
              if(rev[i]==temp)
    	    {
    	        count=count+1;
    	    }
    	    
    	}
    	
    	if(count==n)
    	{
    	    return 1;
    	}
    	else
    	{
    	    return 0;
    	}
     
    } 	
    	 
};

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        //enter the size of array
        cout << "Enter the size of the array:" <<endl;
        int n;
        cin >> n;
        int a[n];
        cout<<"Enter the elments of the array:"<<endl;
    for(int i=0;i < n;i++){
        cin >> a[i];
    }
    Solution obj;
    cout << obj.PalinArray(a,n)<< endl;
    }
    
}