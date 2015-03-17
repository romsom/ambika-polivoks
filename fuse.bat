avrdude -p m328p -F -P avrdoper -c stk500v2 -V -U efuse:w:0xfd:m -U hfuse:w:0xde:m -U lfuse:w:0xff:m -U lock:w:0x2f:m
pause