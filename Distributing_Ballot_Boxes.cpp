#include <bits/stdc++.h>
using namespace std;

int main () {
  long long int N,B, i, tot, mid, start, end, s;
  while(1 == 1) {
  cin >> N >> B;
  if (N == -1) break;
  long long int pop[N], box[N];
  float ratio[N];
  tot = 0;
  for(i = 0; i < N; i++) {
    cin >> pop[i];
    tot += pop[i];
  }
  sort(pop, pop+N);
  start = 1;
  end = pop[N-1];
//  cout << pop[N-1] << "\n";
  while(end - start > 1) {
    s = 0;
    mid = ceil((start+end)/2);
    //cout << mid << "\n";
    for (i = 0; i < N; i++) {
      s += ceil((float)pop[i]/(float)mid);
    }
    if (s <= B) {
      end = mid;
    }
    else {
      start = mid;
    }
  }
  cout << end << "\n";


}

}
