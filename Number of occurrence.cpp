#include<bits/stdc++.h>
int count(vector<int>& nums, int n, int target) {
	int start=0;
       int end=nums.size()-1;
       int a=nums.size();

       while(start<=end){
           int mid=(start+end)/2;
           if(nums[mid]>=target){
               a=mid;
               end=mid-1;
               
           }
           else start=mid+1;
       } 
       int b=nums.size();
       start=0;
       end=nums.size()-1;
       while(start<=end){
           int mid=(start+end)/2;
           if(nums[mid]>target){
               b=mid;
               end=mid-1;
               
           }
           else start=mid+1;
       } 
       
       if(a==nums.size()||nums[a]!=target) return 0;
       return b-a;

    }
