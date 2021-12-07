#include <iostream>
#include <memory>
#include <numeric>
#include <brent_root>
#include <algorithm>
int _Volumes_build_brent_root_test_brent_root(int, char**) noexcept
{
  float tolerance_{1e-19f};
  std::vector<float> a_(1);
  std::vector<float> b_(1);
  std::vector<float> c_(1);
  std::vector<float> d_(1);

  std::iota(a_.begin(), a_.end(), -12);
  std::iota(b_.begin(), b_.end(), 1);
  std::iota(c_.begin(), c_.end(), 0);
  std::iota(d_.begin(), d_.end(), 1);

  float rc;
  for (auto a : a_)
  for (auto b : b_)
  for (auto c : c_)
  for (auto d : d_)
  {
    rc = tregana::brent_root<float>(
    [&a, &b, &c, &d] (float x) { return a * pow(x,3) + b * pow(x,2) + c * x  + d; }, 
    std::make_pair<float, float>(-100.0f, 100.0f), tolerance_);
  }
  std::cout << rc << std::endl;
  return 0;
}
