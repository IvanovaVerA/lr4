#ifndef HISTOGRAM_H_INCLUDED
#define HISTOGRAM_H_INCLUDED
#include <vector>
#include <iostream>

using namespace std;

struct Input {
    vector<double> numbers;
    size_t bin_count;
};

void
find_minmax(vector<double> numbers, double& min, double& max);
vector<size_t>make_histogram(const Input& data);

#endif // HISTOGRAM_H_INCLUDED
