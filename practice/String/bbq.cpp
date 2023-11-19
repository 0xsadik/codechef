#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int N; 
  long long totalLength = 0; 

  cin >> N;

  vector<long long> lengths(2 * N);

  for (int i = 0; i < 2 * N; i++) {
    cin >> lengths[i];
  }

  sort(lengths.begin(), lengths.end()); 

  for (int i = 0; i < N * 2; i += 2) {
    totalLength += lengths[i]; 
  }

  cout << totalLength << endl;

  return 0;
}