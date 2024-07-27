#include "stats.h"
using namespace std;

namespace Statistics {
	
Stats ComputeStatistics(const std::vector<float>& arr) {
    //Implement statistics here
	Stats s{};
	if (!arr.size())
	{
		std::cout << "Empty vector supplied" <<std::endl;
	}
	else
	{
		auto const count = static_cast<float>(arr.size());
		s.min = *std::min_element(arr.begin(), arr.end());
		s.max = *std::max_element(arr.begin(), arr.end());
		s.average = accumulate( arr.begin(), arr.end(), 0.0)/arr.size();
	}
	return s;
	}
}
