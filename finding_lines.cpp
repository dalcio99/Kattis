#include <bits/stdc++.h>
#define lli long long int
using namespace std;


int main () {
  vector <pair <lli, lli>> points;
  pair <lli,lli> P0, P1;
  bool found = false;
  int i, n, p, res, r0, r1;
  cin >> n >> p;
  for (i = 0; i < n; i++) {
    cin >> P0.first >> P0.second;
    points.push_back(P0);
  }
  //for (i = 0; i < 100; i++) cout << rand() % n << "\n";
  for (i = 0; i < 250; i++) {
    // take a random P_0 P_1
    r0 = rand() % n;
    r1 = r0;
    while (r0 == r1 & n != 1) {
      r1 = rand() % n;
    }
    P0 = points[r0];
    P1 = points[r1];
    // check all the points
    res = 0;
    // non vertical case
    if (P0.first != P1.second) {
      for (int j = 0; j < n; j++ ) {
        if ( (points[j].second - P1.second)*(P1.first - P0.first) ==
                (P1.second - P0.second)*(points[j].first - P1.first) ) {
                  res++;
                }
      }
    }
    // vertical case
    else {
      for (int j = 0; j < n; j++ ) {
        if (points[j].first == P0.first) res++;
      }
    }
    if ( ((float) res / (float) n)*100 >= (float) p ) {
      cout << "possible";
      found = true;
      break;
    }
   //cout << r0 << " " << r1 << " " << res << "\n";
  }
  if (found == false) cout << "impossible";
  return 0;
}
