#include <bits/stdc++.h>
using namespace std;

int main () {
  long long int n, i, j, a, d, c;
  long long int b[3];
  a = 0;
  d = 0;
  c = 0;
  b[1] = 0;
  b[2] = 0;
  b[0] = 0;
  cin >> n;
  int A[n], B[n];
  for (i = 0; i < n; i++) {
    cin >> A[i];
  }
  for (i = 0; i < n; i++) {
    cin >> B[i];
    if (n*i % 3 == 1) b[1] += B[i];
    if (n*i % 3 == 2) b[2] += B[i];
    if (n*i % 3 == 0) b[0] += B[i];
  }
  for (i = 0; i < n; i++) {
    a += A[i]*b[(n-i)%3];
    d += A[i]*b[(n+1-i)%3];
    c += A[i]*b[(n+2-i)%3];
  }
  cout << a << " ";
  cout << d << " ";
  cout << c << " ";
}
