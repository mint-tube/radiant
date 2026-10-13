#include <iostream>
#include <iomanip>
#include <algorithm>
#include <numeric>
#include <bit>
#include <source_location>

#include <string>
#include <array>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <deque>
#include <bitset>
#include <utility>
#include <concepts>

#include <stdint.h>
#include <math.h>
#include <limits.h>
#include <string.h>
#include <stdlib.h>

template<typename T>
concept MapLike = requires {
  typename T::key_type;
  typename T::mapped_type;
};

template<typename T>
concept SetLike = requires {
  typename T::key_type;
} && !MapLike<T>;

template<MapLike M> std::ostream &operator<<(std::ostream &out, const M &m) {
  if (m.empty()) return out << "{}";
  out << '{';
  for (const auto &[k, v] : m) out << k << ": " << v << ", ";
  return out << "\b\b}";
}

template<SetLike S> std::ostream &operator<<(std::ostream &out, const S &s) {
  if (s.empty()) return out << "{}";
  out << '{';
  for (const auto el : s) out << el << ", ";
  return out << "\b\b}";
}

template<typename T1, typename T2> std::ostream &operator<<(std::ostream &out, const std::pair<T1, T2> &p) {
  return out << "{" << p.first << ", " << p.second << "}";
}

#define ln std::endl

void log(auto... args) {
  std::cout << "\x1b[32;1m:\x1b[0m ";
  ((std::cout << args), ...);
  std::cout << std::endl;
}

inline void _asrt_impl(bool ok, const char *expr, std::source_location loc = std::source_location::current()) {
  if (!ok) {
    std::cerr << "\x1b[31;1mAssertion failed:\x1b[0m " << expr << "\n-- " << loc.file_name() << ":" << loc.line() << "\n";
    abort();
  }
}
#define asrt(expr) _asrt_impl(bool(expr), #expr)