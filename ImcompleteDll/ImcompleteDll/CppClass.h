#pragma once

#include <string>

namespace my_space {
	class CppClass
	{
	public:
		CppClass(std::string _text) :text(_text) {};
		CppClass(const CppClass& src);
		CppClass& operator=(const CppClass& src);
		std::string text;
		void print_string();
	};

}
