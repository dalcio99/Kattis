#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int winner(lli n, lli m) { // 0 is Stan and 1 is Ollie // r = n % m
  if (n > 2*m || n % m == 0) return 0; // In this case, the player can choose to play with the pair (m,r) or force the other to play with (m,r) => knowing winner(m,r) is enough for him to choose the winning strategy.
    else {                             // Otherwise the move is forced and "the ball" passes to the other player.
      return 1 - winner(m,n-m);
    }
}

int main() {
  lli n,m;
  cin >> n >> m;
  while (n != 0 || m != 0) {
    if (m > n) swap(n,m);
    if (winner(n,m) == 0) cout << "Stan wins" << "\n";
      else cout << "Ollie wins" << "\n";
    cin >> n >> m;
  }
  return 0;
}
