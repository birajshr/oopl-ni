#include <list>       // list
#include <algorithm>  // equal
#include <functional> // function
#include <list>       // list
#include <vector>     // vector

#include "gtest/gtest.h"


using namespace std;
using namespace testing;
template <typename S, typename T>

bool my_equal(S Array1, S size , T Array2)
{
	while(Array1 != size)
	{
		if(*Array1 != *Array2) return false;
		Array1++;
		Array2++;
	}
	return true;
}

