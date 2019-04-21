#include <mean.h>

namespace csce240 {
    void Mean::Collect(double datum) {
       push_back(datum);
    }  // Ending bracket for method collect

    double Mean::Calculate() const {
        double sum = 0;
        for (size_t i = 0; i < size(); ++i) {
            sum += at(i);
        }  // Ending bracket for method calculate
        return (sum / size());
        return 0;
    }  // Endin bracket for method calculate
}  // namespace csce240