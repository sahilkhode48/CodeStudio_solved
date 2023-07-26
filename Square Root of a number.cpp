#include <bits/stdc++.h>
int floorSqrt(int n){
    // Can be directly solved by using sqrt()
    //solved by taking range 1-n and using BS

    int start=1;
    int end=n;
    
    while(start<=end){
        long long mid=(start+end)/2;
        long long val=mid*mid;
        if(val <=(long long) (n)){
            
            start=mid+1;
        }
        else end=mid-1;
    }
    return end;
}
