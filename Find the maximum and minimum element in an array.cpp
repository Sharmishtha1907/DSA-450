#include <bits/stdc++.h> 
int sumOfMaxMin(int arr[], int n){
	if(n==1)
	{
        return 2*arr[0];
	}
	int maxx=max(arr[0],arr[1]);
	int minn=min(arr[0],arr[1]);
	if(n<3)
	{
		return minn+maxx;
	}
    int i=3-n%2;
	while(i<n)
	{
		maxx=max(maxx,max(arr[i],arr[i-1]));
		minn=min(minn,min(arr[i],arr[i-1]));
		i=i+2;
	}
	return minn+maxx;
}
