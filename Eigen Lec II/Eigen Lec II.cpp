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




	return 0;
}
