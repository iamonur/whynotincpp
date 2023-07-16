#ifndef HELPERS_HPP
#define HELPERS_HPP

#include <cmath>
#include <vector>

double random_d(double from, double to);

double distance_vector(const std::vector<double>& vec1, const std::vector<double>& vec2);

// Sigmoid_d

double sigmoid_d(double x);
double sigmoid_derivative_d(double x);

// ReLU_d

double relu_d(double x);
double relu_derivative_d(double x);

#endif // HELPERS_HPP