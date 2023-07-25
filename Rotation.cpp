#include<bits/stdc++.h>
int findKRotation(vector<int> &arr){
    int start=0;
    int end=arr.size()-1;
    int ans=INT_MAX;
    int index=-1;
    //if sorted subspace, start gets stored in ans
    while(start<=end){
        int mid=(start+end)/2;
        
        if(arr[start]<=arr[end]){
            if(arr[start]<ans){
                index=start;
                ans=arr[start];
            }
            break;
        }//if in sorted subspace only
        if(arr[start]<=arr[mid]){//if lft is sorted
            if(arr[start]<ans){
                index=start;
                ans=arr[start];
            }
            start=mid+1;
        }
        else{//if right sorted
            if(arr[mid]<ans){
                index=mid;
                ans=arr[mid];
                
            }
            end=mid-1;
        }
    }  
    return index;

}
