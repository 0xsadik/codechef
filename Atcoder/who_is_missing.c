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

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[4 * n - 1];
    int missingCard = 0;
    for (int i = 0; i < 4 * n - 1; i++) {
        scanf("%d", &arr[i]);
    }
    int cnt = 0;
    for (int value = 1; value < n; value++) {
        for (int i = 0; i < 4 * n - 1; i++) {
            if (arr[i] == value) {
                cnt++;
            }
        }
        printf("value %d occurs %d times", value, cnt);
    }

    return 0;
}



// https://youtu.be/g1aC8vIJwiw?list=PLoa_roVVsxA2Rqa21grJ4jovQW3kFc3SE&t=2489 ( problem )
