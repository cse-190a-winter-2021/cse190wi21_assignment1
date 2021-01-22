#include <sam.h>
#include "ledcircle.h"


void ledcircle_select(uint16_t led) {
  // TODO Your implementation here

  // TODO remove this code. This just turns off all LEDs.
  PORT->Group[0].DIRSET.reg = PORT_PA15 | PORT_PA20 | PORT_PA21 | PORT_PA06 | PORT_PA07;
  PORT->Group[0].OUTCLR.reg = PORT_PA15 | PORT_PA20 | PORT_PA21 | PORT_PA06 | PORT_PA07;
}
