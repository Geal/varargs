#include <stdarg.h>

void transform(va_list* list, ...) {
  va_start(*list, list);
}

void end(va_list* list) {
  va_end(*list);
}
