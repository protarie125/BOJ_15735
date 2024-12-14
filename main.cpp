#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll N;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> N;
  auto sum = vl(N + 2, 0);
  sum[1] = 1;
  for (auto i = 2; i < N + 2; ++i) {
    sum[i] = sum[i - 1] + i;
  }

  ll ans = 0;
  for (auto i = 1; i <= N; ++i) {
    ans += sum[i];
  }
  for (auto i = N - 1; 1 <= i; i -= 2) {
    ans += sum[i];
  }

  cout << ans;

  return 0;
}