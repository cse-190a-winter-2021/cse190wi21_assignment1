#include <sam.h>

#include "ledcircle.h"

/* === DO NOT REMOVE: Initialize C library === */
extern "C" void __libc_init_array(void);

int main(void) {  
  /* ==== DO NOT REMOVE: USB configuration ==== */
  init();
  __libc_init_array();
  USBDevice.init();
  USBDevice.attach();
  /* =========================================== */

  /* === Init Drivers === */
  ledcircle_select(0);

  /* === Main Loop === */
  while (1) {
    // TODO Your implementation here
  }
  
  return 0;
}
