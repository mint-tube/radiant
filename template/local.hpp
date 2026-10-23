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
concept map_like = requires {
  typename T::key_type;
  typename T::mapped_type;
};

template<typename T>
concept set_like = requires {
  typename T::key_type;
} && !map_like<T>;

template<typename T> std::ostream &operator<<(std::ostream &out, const std::vector<T> &vec);
template<typename T1, typename T2> std::ostream &operator<<(std::ostream &out, const std::pair<T1, T2> &p);
template<set_like S> std::ostream &operator<<(std::ostream &out, const S &s);

template<map_like M> std::ostream &operator<<(std::ostream &out, const M &m) {
  out << '{';
  bool first = true;
  for (const auto &[k, v] : m) {
    if (!first) out << ", ", first = false;
    out << k << ": " << v;
  }
  return out << '}';
}

template<set_like S> std::ostream &operator<<(std::ostream &out, const S &s) {
  out << '{';
  bool first = true;
  for (const auto &el : s) {
    if (!first) out << ", ", first = false;
    out << el;
  }
  return out << '}';
}

template<typename T1, typename T2> std::ostream &operator<<(std::ostream &out, const std::pair<T1, T2> &p) {
  return out << '{' << p.first << ", " << p.second << '}';
}


#define ln std::endl

void lg(auto... args) {
  std::cout << "\x1b[32;1m:\x1b[0m ";
  ((std::cout << args), ...);
  std::cout << std::endl;
}

inline void _asrt_impl(bool ok, const char *expr, std::source_location loc = std::source_location::current()) {
  if (!ok) {
    std::cerr << "\x1b[31;1mAssertion failed:\x1b[0m " << expr << "\nat " << loc.file_name() << ":" << loc.line() << "\n";
    abort();
  }
}
#define asrt(...) _asrt_impl(bool(__VA_ARGS__), #__VA_ARGS__)