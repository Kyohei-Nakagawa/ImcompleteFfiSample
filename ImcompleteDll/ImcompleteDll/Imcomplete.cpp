#include "Imcomplete.h"
#include "CppClass.h"

ImcompleteType* ImcompleteType_New(char* text) {
	return reinterpret_cast<ImcompleteType*>(new my_space::CppClass(text));
}

void ImcompleteType_Set(ImcompleteType* ptr, const char* text) {
	my_space::CppClass* cpp = reinterpret_cast<my_space::CppClass*>(ptr);
	std::string _text(text);
	cpp->text = _text;
}

void ImcompleteType_Get(ImcompleteType* ptr, const char** text) {
	my_space::CppClass* cpp = reinterpret_cast<my_space::CppClass*>(ptr);
	*text = cpp->text.c_str();
}

void ImcompleteType_Print(ImcompleteType* ptr) {
	my_space::CppClass* cpp = reinterpret_cast<my_space::CppClass*>(ptr);
	cpp->print_string();
}

void ImcompleteType_Delete(ImcompleteType* ptr) {
	my_space::CppClass* cpp = reinterpret_cast<my_space::CppClass*>(ptr);
	delete cpp;
}

