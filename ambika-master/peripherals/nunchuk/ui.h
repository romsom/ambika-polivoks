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
// Declaration of user interface elements.

#ifndef PERIPHERALS_NUNCHUK_UI_H_
#define PERIPHERALS_NUNCHUK_UI_H_

#include "avrlib/devices/switch.h"
#include "avrlib/gpio.h"

namespace nunchuk {

typedef avrlib::DebouncedSwitch<avrlib::Gpio<avrlib::PortD, 0> > ProgramSwitch;
typedef avrlib::Gpio<avrlib::PortD, 2> DataLed;
typedef avrlib::Gpio<avrlib::PortD, 3> NoteLed;

extern DataLed connection_led;
extern NoteLed note_led;
extern ProgramSwitch program_switch;

}  // namespace nunchuk

#endif  // PERIPHERALS_NUNCHUK_UI_H_
