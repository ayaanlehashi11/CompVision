#ifndef Vision_h
#define Vision_h
#define _CAMERA_FIRMWARE
#endif

#include <iostream>


class Vision {
public:
	Vision();
	Vision(int widthPixel, int heigthPixel);
	int getBitRate(U BitMapId);
	int getFrameRate();
	void setFrameRate(const unsigned long frame_rate);
	int getCameraID();
	template <class T> T FrameAcceptor(const Vision& v);
	Vision& operator+(const Vision&);
	Vision& operator [](const Vision& vision);
	friend bool operator == (Vision& v1, Vision& v2);
	friend bool operator != (Vision& v1, Vision& v2);
	const bool isAcceptable()noexcept;


public:
	unsigned long frame_rate;
	int widthPxl;
	int heigthPxl;
	int _camera_id;
	const bool checker;
};