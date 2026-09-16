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
#include <queue>
#include <stack>
#include <bitset>
#include <utility>

#include <stdint.h>
#include <math.h>
#include <limits.h>
#include <string.h>
#include <stdlib.h>

#define ln std::endl

template<typename... Args> void log(Args... args) { std::cout << "\x1b[32;1m:\x1b[0m "; ((std::cout << args << ' '), ...); std::cout << std::endl; }

inline void __assert_impl(bool ok, const char *expr, std::source_location loc = std::source_location::current()) {
  if (!ok) {
    std::cerr << "\x1b[31;1mAssertion failed:\x1b[0m " << expr << "\n-- " << loc.file_name() << ":" << loc.line() << "\n";
    abort();
  }
}
#define assert(expr) __assert_impl(bool(expr), #expr)