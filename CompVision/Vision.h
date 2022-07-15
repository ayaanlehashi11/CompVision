#ifndef Vision_h
#define Vision_h
#endif

#include <iostream>
#include <opencv2/photo.hpp>
#include <opencv2/video.hpp>
#include <opencv2/videoio/videoio.hpp>


class Vision {
public:
	Vision();
	Vision(int widthPixel, int heigthPixel);
	int getBitRate(U BitMapId);
	int getFrameRate();
	void setFrameRate(const unsigned long frame_rate);
	template <class T> T FrameAcceptor(const Vision& v);
	Vision& operator+(const Vision&);
	Vision& operator [](const Vision& vision);
	friend bool operator == (Vision& v1, Vision& v2);
	friend bool operator != (Vision& v2, Vision& v2);
	const bool isAcceptable()noexcept;


public:
	unsigned long frame_rate;
	int widthPxl;
	int heigthPxl;
	const bool checker;
};