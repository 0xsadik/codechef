// B - who is missing ? 





// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//   int n, i;
//   scanf("%d", &n);
//   int cards[4 * n - 1];
//   for (i = 0; i < 4 * n - 1; i++) {
//     scanf("%d", &cards[i]);
//  }

//   int missing_card = 0;
//   for (i = 0; i < 4 * n - 1; i++) {
//     int count = 0;
//     int j;
//     for (j = 0; j < 4 * n - 1; j++) {
//       if (cards[i] == cards[j]) {
//         count++;
//       }
//     }

//     if (count == 3) {
//       missing_card = cards[i];
//       break;
//     }
//   }

//   printf("%d\n", missing_card);

//   return 0;
// } 
