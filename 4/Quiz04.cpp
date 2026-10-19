#include <algorithm>
#include <cstddef>
#include <iostream>
#include <vector>

std::istream& read(std::istream& is, std::vector<double>& v)
{
    double number;
    while (is >> number) {
        v.push_back(number);
    }
    return is;
}

double median(const std::vector<double>& v)
{
    if (v.size() == 0) {
        return -1.0;
    }

    // コピーをソートするので、元のvの順番は変わらない
    std::vector<double> sortedValues = v;
    std::sort(sortedValues.begin(), sortedValues.end());

    int middle = static_cast<int>(sortedValues.size()) / 2;
    if (sortedValues.size() % 2 == 1) {
        return sortedValues[middle];
    }

    return (sortedValues[middle - 1] + sortedValues[middle]) / 2.0;
}

int main()
{
    std::vector<double> v;
    read(std::cin, v);

    std::cout << "Input values:";
    for (std::size_t i = 0; i < v.size(); i++) {
        std::cout << ' ' << v[i];
    }
    std::cout << "\nMedian: " << median(v) << '\n';

    return 0;
}
