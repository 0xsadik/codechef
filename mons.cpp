// #include<iostream>
// using namespace std;

// int main()




#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int *monsters = new int[n];
  for (int i = 0; i < n; i++) {
    cin >> monsters[i];
  }

 
  int combo = 0;

  while (true) {
   
    int maxMonsters = 0;
    int maxMonstersIndex = 0;
    for (int i = 0; i < n; i++) {
      if (monsters[i] > maxMonsters) {
        maxMonsters = monsters[i];
        maxMonstersIndex = i;
      }
    }

    if (monsters[maxMonstersIndex] > 0) {
      monsters[maxMonstersIndex]--;
      combo++;
    }

    if (combo >= monsters[maxMonstersIndex]) {
      monsters[maxMonstersIndex] = 0;
      combo = 0;
    }

    bool allDead = true;
    for (int i = 0; i < n; i++) {
      if (monsters[i] > 0) {
        allDead = false;
        break;
      }
    }

    
    if (allDead) {
      break;
    }
  }

  cout << combo << endl;

  
  delete[] monsters;

  return 0;
}