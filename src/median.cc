#include <median.h>

namespace csce240 {
    void Median::Collect(double datum) {
        push_back(datum);
    }  // Ending bracket for metho collect

    double Median::Calculate() const {
        std::sort(begin(), end());
        if (size() % 2 == 0) {
            return ((at(size()/2) + ((at((size()/2)-1))))/2);
        } else {
            return at(size()/2);
        }  // Ending bracket for if else
        return 0;
    }  // Ending bracket for method calculate
}  // namespace csce240