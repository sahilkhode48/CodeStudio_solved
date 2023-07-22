#include<bits/stdc++.h>
int lowerBound(vector<int> arr, int n, int x) {
	int start=0;
    int end=n-1;
       
	int mini=n;
        while(start<=end){
            int mid=(start+end)/2;
            int element=arr[mid];
            if(element>=x){
				mini=mid;
                end=mid-1;
            }
            
               

            
            else if(element< x){
                 start=mid+1;
            }
            
        }
        return mini;
    
}
