#pragma once

typedef struct ImcompleteType ImcompleteType;
typedef struct CallbackObject CallbackObject;

typedef struct Event {
	int id;
	void* body;
} Event;

typedef struct CallbackBody {
	int type;
	const char* message;
}CallbackBody;

typedef int (*EventHandler) (void* arg, Event* event);

extern "C" __declspec(dllexport) ImcompleteType* ImcompleteType_New(char* text);

extern "C" __declspec(dllexport) void ImcompleteType_Set(ImcompleteType* ptr, const char* text);

extern "C" __declspec(dllexport) void ImcompleteType_Get(ImcompleteType* ptr, const char** text);

extern "C" __declspec(dllexport) void ImcompleteType_Print(ImcompleteType* ptr);

extern "C" __declspec(dllexport) void ImcompleteType_Delete(ImcompleteType * ptr);

extern "C" __declspec(dllexport) void ImcompleteType_Callback(ImcompleteType * ptr, void* callback);

extern "C" __declspec(dllexport) void ImcompleteType_run(ImcompleteType * ptr);

extern "C" __declspec(dllexport) CallbackObject * CallbackObject_New(EventHandler handle, void* user_data);

extern "C" __declspec(dllexport) void CallbackObject_Delete(CallbackObject * ptr);
