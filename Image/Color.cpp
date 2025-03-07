#include "Color.h"

Color::Color(uint8_t bluee, uint8_t greenn, uint8_t redd) {
    SetVals(bluee, greenn, redd);
};
void Color::SetVals(uint8_t in_blue, uint8_t in_green, uint8_t in_red) {
    blue = in_blue;
    green = in_green;
    red = in_red;
};