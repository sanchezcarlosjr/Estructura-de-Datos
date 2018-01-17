#include <iostream>

#include "Vector3D.cpp"
using std::cout;
int main(int argc, char** argv) {
	int coordinatesA[3] = {10,20,30};
	int coordinatesB[3] = {10,20,30};
	Vector3D vectorA(coordinatesA), vectorB(coordinatesB);
	
	if(Vector3D::isEqual(vectorA, vectorB)){
		cout<<"Vectores iguales";
	}
	else{
		cout<<"Vectores Desiguales";
	}
	
}
