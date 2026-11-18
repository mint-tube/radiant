#ifdef DEBUG 
#include "template/local.hpp"
#else
#include <bits/stdc++.h>
template<typename T> std::istream &operator>>(std::istream &in, std::vector<T> &vec);
template<typename T, size_t N> std::ostream &operator<<(std::ostream &out, const std::array<T, N> &vec);
#define ln '\n'
#define lg(...)
#define asrt(...)
#define files(str) freopen(str ".in", "r", stdin); freopen(str ".out", "w", stdout);
#endif
using namespace std;
using ll = int64_t;
using vi = vector<int>;
using vl = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
template<typename T1, typename T2> istream &operator>>(istream &in, pair<T1, T2> &p) { in >> p.first; in >> p.second; return in; }
template<typename ...Ts, size_t... Is> istream &read_tuple(istream &in, tuple<Ts...> &t, index_sequence<Is...>) { ((in >> get<Is>(t)), ...); return in; }
template<typename ...Ts> istream &operator>>(istream &in, tuple<Ts...> &t) { return read_tuple(in, t, index_sequence_for<Ts...>{}); }
template<typename T> istream &operator>>(istream &in, vector<T> &vec) { for (auto &el : vec) in >> el; return in; }
template<typename T, size_t N> istream &operator>>(istream &in, array<T, N> &vec) { for (auto &el : vec) in >> el; return in; }
template<typename T> ostream &operator<<(ostream &out, const vector<T> &vec) { for (const auto &el : vec) out << el << ' '; return out; }
template<typename T, size_t N> ostream &operator<<(ostream &out, const array<T, N> &vec) { for (const auto &el : vec) out << el << ' '; return out; }
#define sz(x) int((x).size())
#define all(arr) (arr).begin(), (arr).end()
#define rall(arr) (arr).rbegin(), (arr).rend()
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i <= (n); ++i)
[[maybe_unused]] constexpr int MOD = 1000000007;
[[maybe_unused]] constexpr int INF = INT32_MAX / 2;
[[maybe_unused]] constexpr ll INFL = INT64_MAX / 3;


int main() {
  ios::sync_with_stdio(false); cin.tie(nullptr);


}