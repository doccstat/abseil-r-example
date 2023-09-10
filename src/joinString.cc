#include <Rcpp.h>
// [[Rcpp::depends(abseil)]]
#include "absl/strings/str_join.h"

// [[Rcpp::export]]
std::string joinString() {
  std::vector<std::string> v = {"foo","bar","baz"};
  return absl::StrJoin(v, "-");
}
