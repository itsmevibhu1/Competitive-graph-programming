#include <bits/stdc++.h>

int func(int num, int n, int m){
  long long ans = 1;
  for(int i=0;i<n;i++){
    ans=ans*num;
    if(ans > m) break ;
  }
  if(ans == m) return 1;
  if(ans > m) return 2;
  return 0;
}

int NthRoot(int n, int m) {
  int ans =-1;
  int low = 1, high = m;
  while(low <= high){
    int mid = (low+high)/2;
    int midn=func(mid,n,m);
    if(midn == 1){
      ans= mid;
      break;
    }
    else if(midn == 0){
      low = mid + 1;
    }
    else{
      high = mid - 1;
    }
  }
  return ans;
}