// Copyright 2011 Olivier Gillet.
//
// Author: Olivier Gillet (ol.gillet@gmail.com)
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
// -----------------------------------------------------------------------------
//
// Declaration of the LEDs.

#ifndef VOICECARD_LEDS_H_
#define VOICECARD_LEDS_H_

#include "avrlib/gpio.h"

namespace ambika {

typedef avrlib::Gpio<avrlib::PortC, 4> RxLed;
typedef avrlib::Gpio<avrlib::PortC, 5> NoteLed;

extern RxLed rx_led;
extern NoteLed note_led;

}  // namespace ambika

#endif  // VOICECARD_LEDS_H_
