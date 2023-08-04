#include <bits/stdc++.h>

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function


    int kthSmallest(int arr[], int l, int r, int k) {
        sort(arr,arr + (r-l)+1);
        int i=l,t=0;
      while(t<k)
      {
	  if(arr[i]!=arr[i-1])
	  {
		  t++;
	  }
	  i++;
      }
       return arr[i-1];
       }
};
