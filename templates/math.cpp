#include "../main.cpp"

// floor division for integers, b > 0
int floor_div(int a, int b) {
  if (a >= 0) return a / b;
  return (a - b + 1) / b;
}

i64 binpow(i64 a, i64 b) {
  i64 rv;
  while (b > 0) {
    if (b & 1) rv *= a;
    rv *= rv;
    b >>= 1;
  }
  return rv;
}