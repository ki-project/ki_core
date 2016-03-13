#include <thread> // std::this_thread::sleep_for
#include <chrono> // std::chrono::seconds

int sleep(int i) 
{
	std::this_thread::sleep_for (std::chrono::seconds(i));
	return 0;
}