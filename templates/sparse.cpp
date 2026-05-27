#include "../main.cpp"

template <typename T, T(*F)(T, T)>
struct sparsetable {
  int n;
  vector<vector<T>> layers;

  sparsetable(const vector<T> &a, const F &f) : func(f) {
    n = static_cast<int>(a.size());
    int max_log = 32 - __builtin_clz(n);
    layers.resize(max_log);
    layers[0] = a;
    for (int j = 1; j < max_log; j++) {
      layers[j].resize(n - (1 << j) + 1);
      for (int i = 0; i <= n - (1 << j); i++) {
        layers[j][i] = func(layers[j - 1][i], layers[j - 1][i + (1 << (j - 1))]);
      }
    }
  }

  T get(int from, int to) const {
    assert(0 <= from && from <= to && to <= n - 1);
    int lg = 32 - __builtin_clz(to - from + 1) - 1;
    return func(layers[lg][from], layers[lg][to - (1 << lg) + 1]);
  }
};