#include <iostream>
#include <Eigen/Dense>


using namespace Eigen;

Eigen::MatrixXd polynomialFeatures(const Eigen::MatrixXd& X, int degree) {
    int num_samples = X.rows();
    int num_features = X.cols();
    int num_poly_features = (degree + 1) * num_features;

    Eigen::MatrixXd poly_features(num_samples, num_poly_features);
    poly_features.setOnes();

    int col_index = num_features;
    for (int d = 1; d <= degree; d++) {
        for (int f = 0; f < num_features; f++) {
            poly_features.col(col_index) = X.col(f).array().pow(d);
            col_index++;
        }
    }

    return poly_features;
}


int main() {
    // 创建一个3x3的矩阵
    Eigen::Matrix3d matrix;
    matrix << 1, 2, 3,
            4, 5, 6,
            7, 8, 9;

    // 输出矩阵
    std::cout << "Matrix:\n" << matrix << "\n\n";

    // 计算矩阵的特征值
    Eigen::EigenSolver<Eigen::Matrix3d> solver(matrix);
    std::cout << "Eigenvalues:\n" << solver.eigenvalues() << "\n";

    return 0;
}




