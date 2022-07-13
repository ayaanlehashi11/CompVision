#ifndef Vision_h
#define Vision_h
#endif

#include <iostream>
#include <opencv2/>

template <class T, class U>
class Vision {
public:
	Vision();
	int getBitRate(U BitMapId);
	int getFrameRate();
	void setFrameRate(const unsigned long frame_rate);
public:
	unsigned long frame_rate;

};