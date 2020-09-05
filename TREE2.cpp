//A Problem on Sticks


#include<bits/stdc++.h>

using namespace std;


bool isZeroArray(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i] != 0)
            return false;
    }
    return true;
}


int Sticks(int *arr, int n)
{
    int count = 0;
    bool b = false;
    
    if(isZeroArray(arr,n))
    	return 0;

    while(!b)
    {
        int max =0;
        int secMax = 0;
    	for(int i=0;i<n;i++)
    	{
    	  if(arr[i]>max)
    	       max = arr[i];
    	}
    	for(int i=0;i<n;i++)
    	{
    	    if(arr[i]>secMax and arr[i]<max)
    	        secMax = arr[i];
    	}
    	for(int i=0;i<n;i++)
    	{
    	    if(arr[i]>secMax)
    	        arr[i] = secMax;
    	}
    	b = isZeroArray(arr,n);
    	count++;
    }
    return count;
	
    
}



int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int arr[n];
	    for(int i=0;i<n;cin>>arr[i++]);
	    
	    cout<<Sticks(arr,n)<<endl;
	    
	    
	}
	return 0;
}
