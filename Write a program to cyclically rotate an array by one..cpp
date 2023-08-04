#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++) 
   {
       cin>>a[n-i-1];
   }
   int k;
   cin>>k;
   int b[n];
   for(int i=0;i<n;i++)
   {
       b[(i+k)%n]=a[i];
   }
   for(int i=0;i<n;i++)
   {
       cout<<b[n-i-1]<<" ";
   }



}
