#include "../main.cpp"

i64 binpow(i64 a, i64 b) {
  i64 rv;
  while (b > 0) {
    if (b & 1) rv *= a;
    rv *= rv;
    b >>= 1;
  }
  return rv;
}