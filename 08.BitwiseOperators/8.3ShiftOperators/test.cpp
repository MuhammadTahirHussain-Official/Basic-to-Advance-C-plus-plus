#include <iostream>

int main() {
    int a[] = {5, 6, 7, 8};

    // Range-based for loop where the loop variable is not used
    for ([[maybe_unused]] int n : a) {
        // We don't use 'n', just print 1 for each element
        std::cout << 1 << ' ';
    }

    std::cout << '\n';

    // Unused variable example
    [[maybe_unused]] int x = 42; // compiler won't warn

    return 0;
}
