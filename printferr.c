#include "printferr.h"

int printferr(const char *format, ...) {
  va_list ap;

  va_start(ap, format);
  int code = vfprintf(stderr, format, ap);

  va_end(ap);
  return code;
}

