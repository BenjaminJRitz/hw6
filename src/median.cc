// Copyright 2019 <Benjamin Ritz>

#include <median.h>

namespace csce240 {
    void Median::Collect(double datum) {
       if (empty()) {
           push_back(datum);
       } else {
           for (size_t i = 0; i < size(); ++i) {
               if (i == size()-1) {
                   insert(end(), datum);
                   break;
               } else if (datum <= at(i)) {
                   insert(begin()+i, datum);
                   break;
               }
           }
       }
    }  // Ending bracket for metho collect

    double Median::Calculate() const {
        if (size() == 1) {
            return at(0);
        } else if (size() % 2 == 1) {
            return at(size()/2);
        } else if (size() % 2 == 0) {
            return ( (at(size()/2) + ((at((size()/2)-1))))) /2;
        } else if (empty()) {
            return 0;
        }
        return 0;
    }  // Ending bracket for method calculate
}  // namespace csce240
