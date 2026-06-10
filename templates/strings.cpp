#include "boiling.cpp"

vector<u64> kmp(const string a, const string b) {
  vector<u64> pi(a.size());
  u64 k = 0;
  for (u64 i = 1; i < a.size(); ++i) {
    while (a[i] != a[k] && k != 0) k = pi[k - 1];
    if (a[i] == a[k]) ++k;
    pi[i] = k;
  }

  vector<u64> rv;
  k = 0;
  for (u64 i = 0; i < b.size(); ++i) {
    while (a[k] != b[i] && k != 0)  k = pi[k - 1];
    if (a[k] == b[i]) ++k;
    if (k == a.size()) {
      rv.push_back(i + 1 - a.size());
      k = pi[k - 1];
    }
  }
  return rv;
}