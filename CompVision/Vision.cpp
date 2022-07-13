#include <iostream>
#include <map>
#include <limits.h>
#include <memory>
#include <thread>
#include <mutex>
#include <filesystem>
#include "Vision.h"

template <class T, class U> Vision <T, U> ::Vision()
{
	
}
template <class T, class U> int Vision<T, U> ::getBitRate(U BitRate)
{
	return 0;
}
template <class T, class U> void Vision<T, U> ::setFrameRate(const unsigned long frame_rate)
{
	this->frame_rate = frame_rate;
	std::cout << "Collecting the frames " << std::endl;
}

