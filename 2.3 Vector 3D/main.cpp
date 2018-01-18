#include <iostream>
#include <math.h>
using std::cout;
class Vector3D
{
	public: int x, y, z;
	
	public: Vector3D(int coordinate[])
	{
		this->x = coordinate[0];
		this->y = coordinate[1];
		this->z = coordinate[2];
	}
	
	public: bool static isEqual(Vector3D vectorA, Vector3D vectorB)
	{
		bool equalInCoordinates[3];
		equalInCoordinates[0] = vectorA.x == vectorB.x;
		equalInCoordinates[1] = vectorA.y == vectorB.y;
		equalInCoordinates[2] = vectorA.z == vectorB.z;
		
		if( equalInCoordinates[0]  && equalInCoordinates[1] &&equalInCoordinates[2]){
			return true;
		}
		
		return false;
	}
	
	public: calculateVectorRule()
	{
		double xSquared = pow( this->x , 2);
		double ySquared = pow( this->y , 2);
	    double zSquared = pow( this->z , 2);
		return sqrt( xSquared + ySquared  + zSquared );
	}
	
};

int main(int argc, char** argv) {
	int coordinatesA[3] = {2,3,5};
	int coordinatesB[3] = {2,3,5};
	Vector3D vectorA(coordinatesA), vectorB(coordinatesB);
	
	if(Vector3D::isEqual(vectorA, vectorB)){
		return 1;
	}
	
	return 0;
	
}
