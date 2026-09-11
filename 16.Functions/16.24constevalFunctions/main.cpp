#include <iostream>

// Must be evaluated at compile time
consteval int get_value(int multiplier){
    return 3 * multiplier;
}

int main(){

    int result = get_value(4); // OK

    constexpr int some_var{5}; // MUST be constexpr
    result = get_value(some_var); // OK

    std::cout << "result : " << result << std::endl;

    return 0;
}
