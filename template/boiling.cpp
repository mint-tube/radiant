#ifdef DEBUG 
#include "template/local.hpp"
#else
#include <bits/stdc++.h>
#pragma GCC optimize("O3,unroll-loops")
template<typename T1, typename T2> std::ostream &operator<<(std::ostream &out, const std::pair<T1, T2> &p) = delete;
template<typename T> std::ostream &operator<<(std::ostream &out, const std::vector<T> &vec) { for (const auto &el : vec) out << el << ' '; return out; };
#define ln '\n'
#define log(...)
#define asrt(...)
#endif
using namespace std;
using i64 = int64_t;
using u64 = uint64_t;
using vi = vector<int>;
using vu = vector<u64>;
using pii = pair<int, int>;
template<typename T> istream &operator>>(istream &in, vector<T> &vec) { for (auto &el : vec) in >> el; return in; };
template<typename T1, typename T2> istream &operator>>(istream &in, vector<pair<T1, T2>> &vec) { for (auto &el : vec) in >> el.first; for (auto &el : vec) in >> el.second; return in; };
#define all(arr) (arr).begin(), (arr).end()
#define rall(arr) (arr).rbegin(), (arr).rend()
[[maybe_unused]] constexpr int mod = 1e9 + 7;


int main() {
  ios::sync_with_stdio(false); cin.tie(nullptr);


}