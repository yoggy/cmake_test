#include <iostream>
#include "Config.h"

int main(int argc, char *argv[])
{
#ifdef HAVE_HOGE_H
	std::cout << "HAVE_HOGE_H is defined" << std::endl;
#else
	std::cout << "HAVE_HOGE_H is not defiled" << std::endl;
#endif
	return 0;
}
