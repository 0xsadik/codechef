// Diverse Team

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int k, n;
//     cin >> k >> n;

//     set<int> rating;
//     for (int i = 0; i < n; i++) {
//         int rate;
//         cin >> rate;

//         if (rating.size() < k && rating.count(rate) == 0) {
//             rating.insert(rate);
//         }
//     }

//     if (rating.size() < k) {
//         cout << "YES\n";
//         for (int rate : rating) {
//             cout << rate << ' ';
//         }
//         cout << '\n';
//     }
//     else {
//         cout << "NO\n";
//     }
//     return 0;
// }



// #include <iostream>
// #include <set>

// using namespace std;

// int main() {
//   int n, k;
//   cin >> n >> k;

//   set<int> ratings;
//   for (int i = 0; i < n; i++) {
//     int rating;
//     cin >> rating;

//     if (ratings.size() < k && ratings.count(rating) == 0) {
//       ratings.insert(rating);
//     }
//   }

//   if (ratings.size() < k) {
//     cout << "NO" << endl;
//   } else {
//     cout << "YES" << endl;

//     for (int rating : ratings) {
//       cout << rating << " ";
//     }

//     cout << endl;
//   }

//   return 0;
// }




#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> ratings(n);
    set<int> distinct_ratings;

    for (int i = 0; i < n; ++i) {
        cin >> ratings[i];
        distinct_ratings.insert(ratings[i]);
    }

    if (distinct_ratings.size() >= k) {
        cout << "YES" << endl;
        set<int> selected_indices;

        // Iterate through ratings and find corresponding indices
        for (int i = 0; i < n && selected_indices.size() < k; ++i) {
            if (distinct_ratings.count(ratings[i]) > 0) {
                selected_indices.insert(i + 1);
            }
        }

        // Output the selected indices
        for (int index : selected_indices) {
            cout << index << " ";
        }
        cout << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
