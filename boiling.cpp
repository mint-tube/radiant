#ifdef DEBUG 
#include "include/pch.hpp"
#define ln std::endl
template<typename... Args> void log(Args... args) { std::cout << "\x1b[32;1m:\x1b[0m "; ((std::cout << args << ' '), ...); std::cout << std::endl; }
#define files(...)
#else
#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#define ln '\n'
#define log(...)
#define files(name) freopen(name ".in", "r", stdin); freopen(name ".out", "w", stdout)
#endif
using namespace std;
using i64 = int64_t;
using u64 = uint64_t;
using vi = vector<int>;
using pii = pair<int, int>;
template<typename T> istream &operator>>(istream &in, vector<T> &vec) { for (auto &el : vec) in >> el; return in; };
template<typename T> ostream &operator<<(ostream &out, const vector<T> &vec) { for (const auto &el : vec) out << el << ' '; return out; };
template<typename T1, typename T2> istream &operator>>(istream &in, vector<pair<T1, T2>> &vec) { for (auto &el : vec) in >> el.first; for (auto &el : vec) in >> el.second; return in; };
template<typename T1, typename T2> ostream &operator<<(ostream &out, const pair<T1, T2> &p) { return out << "{" << p.first << ", " << p.second << "}"; }
#define all(arr) (arr).begin(), (arr).end()
#define rall(arr) (arr).rbegin(), (arr).rend()
[[maybe_unused]] constexpr int mod = 1e9 + 7;


int main() {
  ios::sync_with_stdio(false); cin.tie(nullptr);


}