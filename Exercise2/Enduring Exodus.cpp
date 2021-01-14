#include <bits/stdc++.h>
using namespace std;
int N,K,res = 1e9;
string S;

int next(int i){ // finds the next empty room
  do{
    i += 1;
  } while(i < N && S[i] == '1');
  return i;
}

int main(){
  cin>>N>>K>>S;
  int l = next(-1), m = l, r = l;
  for(int i = 0; i < K; i++){ 
    r = next(r);
  }
  while(r < N){
    while(max(m - l, r - m) > max(next(m) - l, r - next(m))){
      m = next(m);
    }
    res = min(res, max(m - l, r - m));
    l = next(l);
    r = next(r);
  }
  cout << res ;
}
