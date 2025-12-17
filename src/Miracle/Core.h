#pragma once

#ifdef MIRACLE_PLATFORM_WINDOWS
#ifdef MIRACLE_BUILD_DLL
#define MIRACLE_API __declspec(dllexport)
#else
#define MIRACLE_API __declspec(dllimport)
#endif
#else
#error Miracle only supports Windows!
#endif
