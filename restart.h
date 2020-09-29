#pragma once
#include <cstring>
#include <iostream>
#include <vector>
#include <algorithm>
#include <type_traits>
#include <string>

using namespace std;

typedef vector<int>::iterator vecitor;
typedef typename iterator_traits<vector<int>::iterator>::value_type ElementType;


#define MIN(A, B) A > B ? A : B

#define PRINT(NUM) std::cout << "[+]" << NUM;

template<class T>
class PrintMethod {
	
public:
	void operator()(T targ) {
		std::cout << "[-]" << targ << std::endl;
	}

};


