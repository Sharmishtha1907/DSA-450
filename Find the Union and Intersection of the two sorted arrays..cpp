#include <bits/stdc++.h> 
pair < int , int > findSimilarity(vector < int > arr1, vector < int > arr2, int n, int m) 
{
	sort(arr1.begin(),arr1.end());
	sort(arr2.begin(),arr2.end());
	set<int>s;
	int i=0,j=0,t=0;
	while(i<n&&j<m)
	{
		if(arr1[i]<arr2[j])
		{
			s.insert(arr1[i]);
			i++;
		}

		else if(arr2[j]<arr1[i])
		{
			s.insert(arr2[j]);
			j++;
		}
		else
		{
			t++;
			s.insert(arr2[j++]);
			i++;
		}
	}
	while(i<n)
	{
		s.insert(arr1[i++]);
	}
	while(j<m)
	{
		s.insert(arr2[j++]);
	}

	return (make_pair(t,s.size()));
	
}
