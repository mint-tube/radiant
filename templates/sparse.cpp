#include "boiling.cpp"


struct minsparse {
  u64 n;
  vector<vector<i64>> layers;

  minsparse(const vector<i64> &a) {
    n = a.size();
    u64 max_lvl = 32 - __countl_zero(n);
    layers.resize(max_lvl);
    layers[0] = a;
    for (u64 j = 1; j < max_lvl; j++) {
      layers[j].resize(n - (1 << j) + 1);
      for (u64 i = 0; i <= n - (1 << j); i++) {
        layers[j][i] = min(layers[j - 1][i], layers[j - 1][i + (1 << (j - 1))]);
      }
    }
  }

  i64 get(u64 from, u64 to) const {
    u64 lvl = 32 - __countl_zero(to - from + 1) - 1;
    return min(layers[lvl][from], layers[lvl][to - (1 << lvl) + 1]);
  }
};