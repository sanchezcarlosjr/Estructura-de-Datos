#include <math.h>

class StandardDeviation
{
	private: float variance;
	
	public: StandardDeviation(float variance)
	{
		this->variance = variance;
	}
	
	public: float calculate()
	{
		return sqrt(variance);
	}
	
};
