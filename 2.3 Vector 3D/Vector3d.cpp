class Vector3D
{
	public: int coordinates[];
	
	public: Vector3D(int coordinate[])
	{
		for(int i=0; i<3; i++)
		{
			this->coordinates[i] = coordinates[i];
		}
	}

	public: static isEqual(Vector3D vectorA, Vector3D vectorB)
	{
		bool equalInCoordinates[3];
		
		equalInCoordinates[0] = vectorA.coordinates[0] == vectorB.coordinates[0];
		equalInCoordinates[1] = vectorA.coordinates[1] == vectorB.coordinates[1];
		equalInCoordinates[2] = vectorA.coordinates[2] == vectorB.coordinates[2];
		
		if( equalInCoordinates[0]  && equalInCoordinates[1] && equalInCoordinates[2]){
			return true;
		}
		
		
		return false;
	}
	
};
