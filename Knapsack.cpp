#include <iostream>
#include <vector>
#include <algorithm>

struct Item {
    int weight;
    int value;
};

bool compare(Item i1, Item i2) {
    double ratio1 = (double)i1.value / i1.weight;
    double ratio2 = (double)i2.value / i2.weight;
    return ratio1 > ratio2;
}

double fractionalKnapsack(int capacity, std::vector<Item>& items) {
    // Mengurutkan item berdasarkan nilai berat per nilai
    std::sort(items.begin(), items.end(), compare);

    double totalValue = 0.0;
    int currentWeight = 0;

    for (const auto & item : items) {
        // Jika kapasitas masih mencukupi untuk item saat ini
        if (currentWeight + item.weight <= capacity) {
            currentWeight += item.weight;
            totalValue += item.value;
        }
        else {
            // Jika kapasitas tidak mencukupi untuk item saat ini,
            // maka ambil sebagian item sesuai dengan kapasitas yang tersisa
            int remainingCapacity = capacity - currentWeight;
            double fraction = (double)remainingCapacity / item.weight;
            totalValue += item.value * fraction;
            break; // Hentikan perulangan karena kapasitas penuh
        }
    }

    return totalValue;
}

int main() {
    int capacity = 50;
    std::vector<Item> items = { {10, 60}, {20, 100}, {30, 120} };

    double maxValue = fractionalKnapsack(capacity, items);

    std::cout << "Total nilai maksimum yang dapat dimasukkan ke dalam knapsack adalah: " << maxValue << std::endl;

    return 0;
}
