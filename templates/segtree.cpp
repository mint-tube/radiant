#include "boiling.cpp"


struct sumtree {
  u64 N;
  vector<i64> tree;
  vector<i64> lazy;

  sumtree(const vector<i64> &source) {
    N = 2;
    while (N < source.size()) N *= 2;

    tree.resize(4 * N); lazy.resize(4 * N);
    for (int i = 0; i < source.size(); ++i) tree[N + i] = source[i];
    for (int i = N - 1; i > 0; --i) tree[i] = tree[2 * i] + tree[2 * i + 1];
  }

  void push(const u64 i, u64 il, u64 ir) {
    i64 &diff = lazy[i];
    if (diff == 0) [[likely]] return;
    tree[i] += diff * (ir - il);
    lazy[2 * i] += diff; lazy[2 * i + 1] += diff;
    diff = 0;
  }

  u64 get(const u64 &i, u64 il, u64 ir, u64 ql, u64 qr) {
    if (ql <= il && ir <= qr) {
      push(i, il, ir);
      return tree[i];
    }
    if (qr <= il || ir <= ql) return 0;

    push(i, il, ir);
    u64 im = (il + ir) / 2;
    return get(2 * i, il, im, ql, qr) + get(2 * i + 1, im, ir, ql, qr);
  }

  void set(const u64 &i, u64 il, u64 ir, u64 ql, u64 qr, const i64 &x) {
    if (ql <= il && ir <= qr) {
      lazy[i] += x;
      push(i, il, ir);
      return;
    }
    if (qr <= il || ir <= ql) {
      return;
    }

    u64 im = (il + ir) / 2;
    push(i, il, ir);
    set(2 * i, il, im, ql, qr, x); set(2 * i + 1, im, ir, ql, qr, x);
    tree[i] = tree[2 * i] + tree[2 * i + 1];
  }
};