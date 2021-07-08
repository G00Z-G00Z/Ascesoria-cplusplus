#pragma once
#define DEVMODE 0
#if DEVMODE
#define LOG(x) print(x)
#else
#define LOG(x) x
#endif