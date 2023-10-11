#pragma once

#ifdef YING_PLATFORM_WINDOWS
	#ifdef YING_BUILD_DLL
		#define YING_DLL_API __declspec(dllexport)
	#else
		#define YING_DLL_API __declspec(dllimport)
	#endif // YING_BUILD_DLL
#else
	#error Ying only support Windows!
#endif
