#pragma once

#ifdef HN_PLATFORM_WINDOWS
	#ifdef HN_BUILD_DLL
		#define HN_API __declspec(dllexport)
	#else
		#define HN_API __declspec(dllimport)
	#endif 
#else
	#error HN only supports windows
#endif