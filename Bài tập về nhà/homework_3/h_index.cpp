#include <bits/stdc++.h>
using namespace std;
class Solution {
   public:
   int hIndex(vector<int>& c) {
      int n = c.size();
      vector <int> bucket(n + 1);
      for(int i = 0; i < n; i++){
         int x = c[i];
         if(x >= n){
            bucket[n]++;
         } else {
            bucket[x]++;
         }
      }
      int cnt = 0;
      for(int i = n; i >= 0; i--){
         cnt += bucket[i];
         if(cnt >= i)return i;
      }
      return -1;
   }
};
main(){
   Solution ob;
   vector<int> v = {2,3,1,0,4,11,7};
   cout << (ob.hIndex(v));
}