#include<bits/stdc++.h>
int subarraysWithSumK(vector < int > a, int b) {
   int xr=0;
   unordered_map<int,int>mpp;
   int count=0;
   mpp[xr]++;//initialize because it only works like the provious kadanes algo problem
   for(int  i=0;i<a.size();i++){
       xr=xr^a[i];
       int x=xr^b;
       count+=mpp[x];
       mpp[xr]++;


   }
   return count;
}
