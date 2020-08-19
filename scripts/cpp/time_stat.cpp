#include <chrono>

// function
double CalcTime(const std::chrono::time_point<std::chrono::_V2::system_clock, std::chrono::duration<long int, std::ratio<1l,1000000000l>>>& start,
                 const std::chrono::time_point<std::chrono::_V2::system_clock, std::chrono::duration<long int, std::ratio<1l,1000000000l>>>& end) {
  auto duration =
      std::chrono::duration_cast<std::chrono::microseconds>(end - start);
  double ret = double(duration.count()) *
                   std::chrono::microseconds::period::num /
                   std::chrono::microseconds::period::den;
  return ret;
}

// usage
auto start = std::chrono::system_clock::now();
// do something
auto end = std::chrono::system_clock::now();
double time = CalcTime(start, end);

