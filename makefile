lace.gb: lace.c
	lcc -Wa-l -Wl-m "-Wl-yp0x143=0xC0" -o lace.gb lace.c
