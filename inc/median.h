#ifndef _MEDIAN_H_  // NOLINT
#define _MEDIAN_H_  // NOLINT
#include <vector>
//#include <algorithm>
#include <statistic.h>
/* This class inherits from the Statistic class such that it  may be used
 * polymorphically.
 */
namespace csce240 {
  class Median : std::vector<double>, public Statistic {
  public:
    /* Stores data (datum) such than the median may be determined.
    */
    void Collect(double datum);

    /* Calculates the median of the data (datum) from the Collect method.
    */
    double Calculate() const;
  };
}  // namespace csce240
#endif  // NOLINT