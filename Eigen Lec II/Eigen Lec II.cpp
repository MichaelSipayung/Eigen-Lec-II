// Eigen Lec II.cpp : Defines the entry point for the application.
//

#include "Eigen Lec II.h"


int main()
{
	std::cout << "Hello Eigen Matrix library ." << std::endl;
	
	std::cout << "Addition and substraction" << std::endl;
	Eigen::Matrix2d a;
	a << 1, 2,
		3, 4;
	Eigen::MatrixXd b(2, 2);
	b << 2, 3,
		1, 4;
	std::cout << "Performing addition , a + b \t:  "<<std::endl;
	std::cout << a + b << std::endl;
	std::cout << "Performing substraction , a - b \t:  "<<std::endl;
	std::cout << a - b << std::endl;
	std::cout << "Doing , a+=b \t:  "<< std::endl;
	a += b;
	std::cout << "Now Matrix a \t: " << std::endl;
	std::cout << a << std::endl;
	std::cout << "For vector " << std::endl;
	Eigen::Vector3d v(1, 2, 3);
	Eigen::Vector3d w(1, 0, 0);
	std::cout << "Performing -v+w-w = " << std::endl;
	std::cout << -v + w - v << std::endl;
	
	std::cout << "Scalar Multiplication" << std::endl;
	Eigen::MatrixXd aScalar(2, 2);
	aScalar << 1, 2,
		3, 4;
	Eigen::Vector3d vectorScalar(1, 2, 3);
	std::cout << "a * 2.5 =\n" << a * 2.5 << std::endl;
	std::cout << "vector * 2.5 =\n" << vectorScalar * 2.5 << std::endl;
	vectorScalar *= 2;
	std::cout << "Doing  vector *=2\n" << vectorScalar  << std::endl;

	std::cout << "Transposition and conjuction" << std::endl;
	Eigen::MatrixXcf aComp = Eigen::MatrixXcf::Random(2, 2);
	std::cout << "Here is the Matrix\n" << aComp << std::endl;
	std::cout << "Here is the transpose Matrix\n" << aComp.transpose() << std::endl;
	std::cout << "Here is the conjugation Matrix\n" << aComp.conjugate() << std::endl;
	std::cout << "Here is the adjoint Matrix(a^*)\n" << aComp.adjoint() << std::endl;

	std::cout << "Transpositon in place" << std::endl;
	Eigen::MatrixXf inPlace(2, 3);
	inPlace << 1, 2,5,
		3, 4,3;
	std::cout << "Original Matrices " << std::endl;
	std::cout << inPlace << std::endl;
	inPlace.transposeInPlace();
	std::cout << "Using transpose in place " << std::endl;
	std::cout << inPlace << std::endl;

	Eigen::Matrix2d mat;
	mat << 1, 2,
		3, 4;
	Eigen::Vector2d uVec(-1, 1), vVec(2, 0);
	std::cout << "Show Current Matrix" << std::endl;
	std::cout << mat << std::endl;
	std::cout << "1.Show Current Vector" << std::endl;
	std::cout << uVec << std::endl;
	std::cout << "2.Show Current Vector" << std::endl;
	std::cout << vVec << std::endl;
	std::cout << "Here is mat*mat  : \n" << mat * mat << std::endl;
	std::cout << "Here is mat*first vector  : \n" << mat *uVec << std::endl;
	std::cout << "Here is vec^T*matrix  : \n" << uVec.transpose() *mat << std::endl;
	std::cout << "Here is vec^T*matrix  : \n" << uVec.transpose() * mat << std::endl;
	std::cout << "Let's mutiply  matrix by itself" << std::endl;
	mat = mat * mat;
	std::cout << mat << std::endl;

	std::cout << "Dot Product and Cross Product" << std::endl;
	Eigen::Vector3d vecbar(1, 2, 3);
	Eigen::Vector3d sVecbar(0, 1, 2);
	std::cout << "Dot Product \t: " << vecbar.dot(sVecbar) << std::endl;
	std::cout << "Adjoint from first Vector " << vecbar.adjoint() << std::endl;
	double dp = vecbar.adjoint() * sVecbar;
	std::cout << "Dot Product via matrix product " <<dp<< std::endl;
	std::cout << "Cross Product : \n" << vecbar.cross(sVecbar) << std::endl;

	std::cout << "Basic  Arithmetic Reduction Operations" << std::endl;
	Eigen::Matrix2d matSe;
	matSe << 1, 2,
		3, 4;
	std::cout << "Show Current Matrix Value = \n" << matSe <<std::endl;
	std::cout << "Here is mat.sum() = \n" << matSe.sum() << std::endl;
	std::cout << "Here is mat.prod() = \n" << matSe.prod() << std::endl; //get by multiplying each element
	std::cout << "Here is mat.mean() = \n" << matSe.mean() << std::endl;
	std::cout << "Here is mat.minCoef() = \n" << matSe.minCoeff() << std::endl;
	std::cout << "Here is mat.maxCoef() = \n" << matSe.maxCoeff() << std::endl;
	//get by the sum of the diagonal coeffiecients
	std::cout << "Here is mat.trace() = \n" << matSe.trace() << std::endl;

	std::cout << "the minCoeff and maxCoeff functions -returning the cordinates" << std::endl;
	Eigen::Matrix2d doubSec = Eigen::Matrix2d::Random();
	std::ptrdiff_t i, j;
	std::cout << "Here is the current matrix\t: \n" << doubSec << std::endl;
	float minOfm = doubSec.minCoeff(&i, &j);
	std::cout << "it's minimum coefficient";
	std::cout << "It's minimum coefficients ( " << minOfm << ") is at position (" << i << "," << j << ")" << std::endl;


	return 0;
}
