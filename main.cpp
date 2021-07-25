#include <iostream>
#include <eigen3/Eigen/Dense>

int main() {
    auto f = []() {
        Eigen::MatrixXd m(3, 3);
        std::cout << m << std::endl;
        std::cout << "Hello from lambda !" << std::endl;
    };

    f();
    return 0;
}
