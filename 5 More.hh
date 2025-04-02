#pragma once

#ifdef __cplusplus
extern "C" int addition(int a, int b)
#else
int addition(int a, int b)
#endif
{
	return (a + b);
}

// you see these often in legacy codes 