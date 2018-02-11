#include <stdlib.h>
#include <time.h>

class Random
{
	private: int minimum, maximum; 
	public: Random(int minimum, int maximum)
	{
		srand(time(NULL));
		this->maximum = maximum;
		this->minimum = minimum;
	}
	
	public: get()
	{
		return minimum + rand() % (maximum+1-minimum);
	}
};
