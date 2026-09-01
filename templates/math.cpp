#include "boiling.cpp"

i64 binpow(i64 a, i64 b) {
  i64 rv = 1;
  while (b) {
    if (b & 1) rv = (rv * a) % mod;
    a = (a * a) % mod;
    b >>= 1;
  }
  return rv;
}

struct point {
  int x, y;
  point(int x_, int y_) : x(x_), y(y_) {}
  point() {}
};
double operator-(const point &a, const point &b) {
  int x = abs(a.x - b.x), y = abs(a.y - b.y);
  return sqrt(x * x + y * y);
}

struct vec {
  int x, y;

  vec(int x_, int y_) : x(x_), y(y_) {}
  vec() {}
};
double abs(const vec &a) { return sqrt(a.x * a.x + a.y * a.y); }
vec operator+(const vec &a, const vec &b) { return vec(a.x + b.x, a.y + b.y); }
vec operator-(const vec &a, const vec &b) { return vec(a.x - b.x, a.y - b.y); }
int operator*(const vec &a, const vec &b) { return a.x * b.x + a.y * b.y; }
int operator^(const vec &a, const vec &b) { return abs(a.x * b.y - a.y * b.x); }