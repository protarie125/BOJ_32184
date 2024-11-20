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

ll A, B;

ll solve(ll a, ll b) {
  if (a == b) return 1;

  if (a % 2 == 0) {
    return 1 + solve(a + 1, b);
  }

  if (b % 2 == 1) {
    return 1 + solve(a, b - 1);
  }

  return (b - a + 1) / 2;
}

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> A >> B;

  cout << solve(A, B);

  return 0;
}