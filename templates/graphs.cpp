#include "boiling.cpp"


vector<int> dijkstra(const int &start, const int &n, const vector<vector<pair<int, int>>> &links) {
  vector<int> dist(n, INT32_MAX);
  dist[start] = 0;

  set<pair<int, int>> s;
  s.insert(pair<int, int>(0, start));

  while (!s.empty()) {
    const int v = s.begin()->second;
    s.erase(s.begin());
    const int curr = dist[v];

    for (auto [to, w] : links[v]) {
      if (dist[to] > curr + w) {
        s.erase(pair<int, int>(dist[to], to));
        dist[to] = curr + w;
        s.insert(pair<int, int>(dist[to], to));
      }
    }
  }

  return dist;
}