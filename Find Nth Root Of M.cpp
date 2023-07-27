#include <bits/stdc++.h>
//use BS on search space and at every mid check if it is lesser or greater than n time power of target
int func(int mid, int n, int m){
  long long ans=1;
  for(int i=1;i<=n;i++){
    ans=ans*mid;
    if(ans>m)return 2;
  }
  
  if(ans==m)return 1;
  else return 0;
}






int NthRoot(int n, int m) {
  
  int start=1;
  int end=m;   
  while(start<=end){
    int mid=(start+end)/2;
    int temp=func(mid,n,m);
    if(temp==1) return mid;
    else if(temp==0)start=mid+1;
    else end=mid-1;
  }
  return -1;
      
      
 
}
