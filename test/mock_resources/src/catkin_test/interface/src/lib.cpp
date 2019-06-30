#include <iostream>
#include <Eigen/Geometry>

#include <a/foo.hpp>

namespace interface {
  void foo() { 
    Eigen::Vector3d v(1, 1, 1);
    std::cout << v << "\n";
  }
}
