#include <vector>

using namespace std;

long long sum(vector<int> &a) {
  long long ans = 0;
  for (const int num : a)
    ans += num;

  return ans;
}
