


#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n; 
    cin >> n;
    unordered_map<int, int> wheels; 
    
    for (int i = 0; i < n; ++i) { 
        int size;
        cin >> size;
        wheels[size]++; 
    }

    int amount_of_wagons = 0;
    
    for (const auto& pair : wheels) {
        amount_of_wagons += pair.second / 4;
    }

    cout << amount_of_wagons;

    return 0;
}

