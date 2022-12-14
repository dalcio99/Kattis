#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main() {
  int n, i, j, res, l;
  bool succ;
  cin >> n;
  res = 0;
  int perm[n];
  bool vis[n];

  for( i=0; i < n; i++) {
    vis[i] = false;
  }
  for( i=0; i < n; i++) {
    cin >> perm[i];
  }
  vis[perm[0]] = true;
  res = 1;
  for( i = 1; i < n; i++) {
    if(vis[perm[i]-1] == true) {
      vis[perm[i]] = true;
    }
    else  {
      res++;
      vis[perm[i]] = true;
    }
  }
  //for (j=0; j < l; j++) cout << vis[j] << " ";
  cout << ceil(log2(res));
  return 0;
}
