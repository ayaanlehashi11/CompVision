#include <iostream>
#include <map>
#include <limits.h>
#include <memory>
#include <thread>
#include <mutex>
#include <filesystem>
#include "Vision.h"

Vision::Vision()
{
	this->widthPxl = 0;
	this->heigthPxl = 0;
}

Vision::Vision(int widthPixel, int heigthPixel) {
	this->widthPxl = widthPixel;
	this->heigthPxl = heigthPxl;
	std::cout << "the aspect ratio  = " << widthPxl * heigthPxl << std::endl;
}
int Vision::getBitRate(U BitRate)
{
	return 0;
}
void Vision::setFrameRate(const unsigned long frame_rate)
{
	this->frame_rate = frame_rate;
	std::cout << "Collecting the frames " << std::endl;
}
template <class T> T Vision::FrameAcceptor(const Vision& v) {

}
const bool Vision ::isAcceptable() noexcept {
	if (widthPxl > heigthPxl)
	{
		printf("the screen size must meet the aspect ration requirement %d", (widthPxl * heigthPxl));
		return false;
	}
	else {
		return true;
	}
}
Vision& Vision :: operator + (const Vision& vision) {
	Vision temp;
	temp.widthPxl = vision.widthPxl + this->widthPxl;
	temp.heigthPxl = vision.heigthPxl + this->heigthPxl;
	return temp;
}
bool operator == (Vision & v1, Vision& v2) {
	return (v1.widthPxl == v2.widthPxl) && (v2.heigthPxl == v2.heigthPxl);
}

