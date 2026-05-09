#include <iostream>
// constexpr is a prefix that tells the compiler about the value of the varaible at the compile not at the runtime

int main(){

	constexpr int SOME_LIB_MAJOR_VERSION {1237};
	
	constexpr int eye_count {2};
	
	constexpr double PI {3.14};

    // eye_count = 4;
	
	std::cout << "eye count : " << eye_count << std::endl;
	std::cout << "PI : " << PI << std::endl;


	// int leg_count {2}; // Non constexpr
	                    // leg_count is not known at compile time
	// constexpr int arm_count{leg_count}; // Error 


	constexpr int room_count{10};
	constexpr int door_count{room_count};// OK
	
	const int table_count{5};
	constexpr int chair_count{ table_count * 5};// Works


	//static_assert is a compile-time assertion. It checks a condition during compilation rather than at runtime. If the condition is false, the compiler generates an error and stops compilation.
    // static_assert( SOME_LIB_MAJOR_VERSION == 123);

	// age is not a compile time constant so it wont work with it
    int age = 5;
	//static_assert( age == 5);

    std::cout << "App doing its thing..." << std::endl;

    return 0;
}
