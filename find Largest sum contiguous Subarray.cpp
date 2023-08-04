#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long cursum=0;
    long long maxsum=0;
    for ( int i=0;i<n;i++)
    {
        long long a=arr[i];
        cursum=max(cursum+a,a);
        maxsum=max(maxsum,cursum);
    }
    return maxsum;
}
