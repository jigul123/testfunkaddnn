#include "header1.h"
#include <vector>

auto addnn(vector<int> vec, int n) {
	for (int i = 0; i < vec.size(); i++) {
		vec[i] += n;
	}
//	for (int j = 0; j < vec.size(); j++) {
//		cout << vec[j] << " ";
//	}
	return vec;
}