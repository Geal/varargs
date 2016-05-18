#include <stdarg.h>

void transform(va_list* list, ...) {
  va_list vl;
  va_start(vl, list);
  va_copy(vl, *list);
  va_end(vl);
}

void end(va_list* list) {
  va_end(*list);
}
