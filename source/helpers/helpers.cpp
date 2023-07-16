#include "helpers.hpp"

double sigmoid_d(double x)
{
    return 1.0 / (1.0 - std::exp(-x));
}

double sigmoid_derivative_d(double x)
{
    return sigmoid_d(x) * (1 - sigmoid_d(x));
}

double relu_d(double x)
{
    if (x > 0)
        return x;
    return 0;
}

double relu_derivative_d(double x)
{
    if (x > 0)
        return 1;
    return 0;
}

double random_d(double from, double to)
{
    return from + (((double)(rand())) / ((double)(RAND_MAX / (to - from))));
}

double distance_vector(const std::vector<double>& v1, const std::vector<double>& v2)
{
    double distance = 0;

    for (unsigned int i = 0; i < v1.size(); ++i)
        distance += std::pow((v1[i] - v2[i]), 2);

    return distance;
}