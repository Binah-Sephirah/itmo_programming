#pragma once
#include <functional>
namespace PRED {
template <typename InputIt, class UnaryPredicate>
  bool all_of(InputIt F_element, InputIt L_element, UnaryPredicate PRT) {
    for (; F_element != L_element; ++F_element) {
       if (!PRT(*F_element)) {
          return false;
         }
        }
return true;
}
template <typename InputIt, class UnaryPredicate>
  bool is_partitioned(InputIt F_element, InputIt L_element, UnaryPredicate PRT) {
    for (; F_element != L_element; ++F_element) {
      if (!PRT(*F_element)) {
        break;
            }
        }
        for (; F_element != L_element; ++F_element) {
            if (PRT(*F_element)) {
                return false;
            }
        }
        return true;
    }
template <typename InputIt, class Compare = std::less<>>
bool is_sorted(InputIt F_element, InputIt L_element, Compare C_OMP = Compare()) {
   for (; F_element != std::prev(L_element); ++F_element) {
      if (!C_OMP(*F_element, *(std::next(F_element)))) {
         return false;
      }
   }
return true;
}
};

