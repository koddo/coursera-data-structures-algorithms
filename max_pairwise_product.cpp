#include <iostream>
#include <vector>
#include <algorithm>

// int MaxPairwiseProduct(const std::vector<int>& numbers) {
//     int max_product = 0;
//     int n = numbers.size();

//     for (int first = 0; first < n; ++first) {
//         for (int second = first + 1; second < n; ++second) {
//             max_product = std::max(max_product,
//                 numbers[first] * numbers[second]);
//         }
//     }

//     return max_product;
// }

long MaxPairwiseProduct2(const std::vector<int>& numbers) {
    int i1 = 0;

    for(int i = 0; i < numbers.size(); ++i) {
        if(numbers[i1] < numbers[i]) {
            i1 = i;
        }
    }

    int i2 = 0;
    if(i1 == 0)
        i2 = 1;

    for(int i = 0; i < numbers.size(); ++i) {
        if(i != i1 && numbers[i2] < numbers[i]) {
            i2 = i;
        }
    }

    return (long)numbers[i1] * (long)numbers[i2];
}

int main() {
    // srand (time(NULL));
    // while(true) {
    //     using namespace std;
    //     int n = rand() % 10 + 2;
    //     cout << n << endl;
    //     vector<int> a;
    //     for(int i = 0; i < n; ++i) {
    //         a.push_back(rand() % 100000);
    //     }
    //     for(auto x : a) {
    //         cout << x << ' ';
    //     }
    //     cout << endl;
    //     auto res1 = MaxPairwiseProduct(a);
    //     auto res2 = MaxPairwiseProduct2(a);
    //     cout << res1 << " " << res2 << endl;
    //     if(res1 != res2) {
    //         cout << "error" << endl;
    //         exit(1);
    //     }
    // }

    
    int n;
    std::cin >> n;
    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    std::cout << MaxPairwiseProduct2(numbers) << "\n";
    return 0;
}

