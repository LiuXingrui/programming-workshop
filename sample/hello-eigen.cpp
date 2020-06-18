#include <iostream>
//#include <eigen3/Eigen/Dense>
#include <Eigen/Dense>

using Eigen::MatrixXd;

int main()
{
  MatrixXd m(2,2);
  m(0,0) = 3;
  m(1,0) = 2.5;
  m(0,1) = -1;
  m(1,1) = m(1,0) + m(0,1);
  std::cout <<"Eigen matrix :"<< m << std::endl;
  std::cout << "Eigen test passed" << std::endl;
}
