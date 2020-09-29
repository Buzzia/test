#include "./restart.h"



int main()
{
	
	vector<int> vec(10) ;
	vecitor it = vec.begin();
	for (int i = 0; i < 10; ++i) {
		*it = i;
		++it;
	}
	
	for_each(vec.begin(), vec.end(), PrintMethod<ElementType>());
	
	int res = MIN(8, 29);
	PRINT(res);
	return 0;
	


	return 0;
}