#include <bits/stdc++.h> 
void reverseArray(vector<int> &arr , int m)
{
    int s=arr.size();
	for(int i=m+1;i<s;i++)
    {
        swap(arr[i],arr[s-1]);
        s--;
        
    }
}
