#include <iostream>
#include <boost/math/tools/roots.hpp>


using namespace boost::math::tools;

std::pair<double, double> my_function(double x) {
    return {x*x - 4, 2*x};
     // 举例：求解方程x^2 - 4 = 0
}


int main() {


    double initial_guess = -0.5; // 初始猜测值
    double result = newton_raphson_iterate(my_function, initial_guess, -10., 10., 16); // 使用牛顿-拉夫逊迭代法求解方程

    
    std::cout << "The root is: " << result << std::endl;


    return 0;
}

