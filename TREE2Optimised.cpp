//A Problem On Sticks
//Solution -
//Get the unique height of the sticks using set and return the size of it

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

int main()
{
	int t;
	cin>>t;

	
	while(t--)
	{
		int n;
		cin>>n;
		set<int> s;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			int temp;
			cin>>temp;
			arr[i] = temp;
			if(temp>0)
				s.insert(temp);
		}

		if(isZeroArray(arr,n))
			cout<<0<<endl;

		else
			cout<<s.size()<<endl;


	}

	return 0;
}		