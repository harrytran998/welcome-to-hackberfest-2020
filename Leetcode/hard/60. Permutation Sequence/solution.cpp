#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  string getPermutation(int n, int k)
  {
    vector<int> a;
    for (int i = 1; i <= n; i++)
      a.push_back(i);
    while (--k && next_permutation(a.begin(), a.end()))
    {
    };
    string s = "";
    for (auto e : a)
      s += to_string(e);
    return s;
  }
};

typedef pair<int, int> ii;
typedef pair<ii, string> TestCase;

int main()
{
  Solution solution;
  vector<TestCase> testCases{
      TestCase(ii(3, 3), "213"),
      TestCase(ii(4, 9), "2314")};

  for (TestCase testcase : testCases)
  {
    string result = solution.getPermutation(testcase.first.first, testcase.first.second);
    if (result != testcase.second)
    {
      printf("Error: input %d,%d, expected %s, got %s\n", testcase.first.first, testcase.first.second, testcase.second.c_str(), result.c_str());
      return 0;
    }
  };
  printf("Add tests passed!\n");
}