#include <iostream>
#include <vector>
using namespace std;
int main() {
  int N, k;
  vector<int> vec;

  cin >> N >> k;

  int RunTime = k;
  cout << "<";

  for (int i = 0; i < N - 1; i++) {
    vec.push_back(k);
    cout << vec[i] << ", ";

    for (int j = 0; j < RunTime; j++) {
      k++; // 1 2->3 4
      if (k > N) {
        k -= N;
      }
      for (int a = 0; a < vec.size(); a++) {
        if (k == vec[a]) {
          k++;
          a = -1;
          if (k > N) {
            k -= N;
          }
        }
      }
    }
  }

  vec.push_back(k);
  cout << vec[N - 1] << ">";
}