#pragma once

struct _BufByte {
	char myByte;
};

struct _WiFi {
	char SSID[51];
	_BufByte Buffwf1;
	char Pswd[51];
	_BufByte Buffwf2;
};

struct _Version {
	short major;
	short minor;
	short revision;
};

struct Config {
	_Version Version;
	_WiFi Wifi;
	_BufByte Buff1;
};