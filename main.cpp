
#include <iostream> //cout; cin
#include <string>  // string
#include <vector>

auto get_two_ints(int& x)
auto compute_addition(float x, float y) -> float {return x + y; }
auto compute_subtraction(float x, float y) -> float {return x - y; }
auto compute_multiply(float x, float y) -> float {return x * y; }
auto compute_division(float x, float y) -> float {return x / y; }

using BinaryFn = float (*)(float, float);

auto main()-> int
{
        std::vector<BinaryFn> functions {};
        functions.push_back(compute_subtraction);hlih
        functions.push_back(compute_addition);
}
