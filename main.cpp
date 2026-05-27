#include <bits/stdc++.h>
using namespace std;
using i64 = int64_t;
using u64 = uint64_t;
#define all(x) (x).begin(), (x).end()
#define rep(i, l, r) for (u64 (i) = (l); (i) < (r); ++(i))
#ifdef DEBUG 
#define ln endl
#define files(...)
#else
#define ln '\n'
#define files(name) freopen(name ".in", "r", stdin); freopen(name ".out", "w", stdout)
#endif
[[maybe_unused]] constexpr int mod = 1e9 + 7;

int main() {
  ios::sync_with_stdio(false); cin.tie(nullptr);

  int _;
  cin >> _;
  while (_--) {
    int n;
    cin >> n;

    int rv = 0;
    int max_q = 0;
    for (int i = 1; i <= n; ++i) {
      int a, q;
      cin >> a >> q;
      if (a <= 10 && q > max_q) {
        max_q = q;
        rv = i;
      }
    }

    cout << rv << ln;
  }
}