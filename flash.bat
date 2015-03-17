avrdude -p m328p -F -P avrdoper -c stk500v2 -V -U flash:w:polivoks.hex:i -U flash:w:ambika_voicecard_boot.hex:i -U eeprom:w:ambika_voicecard_eeprom_golden.hex:i -U lock:w:0x2f:m
pause