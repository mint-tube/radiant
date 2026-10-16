#ifdef DEBUG 
#include "template/local.hpp"
#else
#include <bits/stdc++.h>
#define ln '\n'
#define lg(...)
#define asrt(...)
#endif
using namespace std;
template<typename T1, typename T2> istream &operator>>(istream &in, pair<T1, T2> &p) { in >> p.first; in >> p.second; return in; };
template<typename T> istream &operator>>(istream &in, vector<T> &vec) { for (auto &el : vec) in >> el; return in; };
template<typename T> std::ostream &operator<<(std::ostream &out, const std::vector<T> &vec) { for (const auto &el : vec) out << el << ' '; cout << '\b'; return out; };
using ll = int64_t;
using vi = vector<int>;
using vl = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
#define st first;
#define nd second
#define all(arr) (arr).begin(), (arr).end()
#define rall(arr) (arr).rbegin(), (arr).rend()
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i <= (n); ++i)
[[maybe_unused]] constexpr int mod = 1e9 - 7;


int main() {
  ios::sync_with_stdio(false); cin.tie(nullptr);


}