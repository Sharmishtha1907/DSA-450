#include <bits/stdc++.h> 
vector<pair<char,int>> duplicate_char(string s, int n){
  map <char,int> m;
   for(int i=0;i<n;i++)
   {
       m[s[i]]++;
   }
   vector <pair<char,int>>v;
   for(auto i:m)
   {
        if(i.second>1)
        {
            v.push_back(make_pair(i.first,i.second));
        }
   }
   return v;
}
