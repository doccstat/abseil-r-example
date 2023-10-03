#include "absl/status/status.h"

#include "statusreturn_export.h"

extern "C" {

STATUSRETURN_EXPORT std::string dummyString(char** dummy) {
  absl::Status status = absl::OkStatus();
  return status.ToString();
}

}  // extern "C"
