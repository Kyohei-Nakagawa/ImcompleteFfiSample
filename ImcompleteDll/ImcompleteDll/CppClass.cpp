#include "CppClass.h"
#include <iostream>

namespace my_space {
	CppClass::CppClass(const CppClass& src) {
		*this = src;
	}

	CppClass& CppClass::operator=(const CppClass& src) {
		this->text = src.text;
		return *this;
	}

	void CppClass::print_string() {
		std::cout << this->text << std::endl;
	}
}
