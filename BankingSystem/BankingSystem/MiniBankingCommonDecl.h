#ifndef _MINIBANKINGCOMMON__H_
#define _MINIBANKINGCOMMON__H_

#include <iostream>
#include <Windows.h>
#include <cstring>

using namespace std;

enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };

enum { NORMAL = 1, CREDIT = 2 };

enum { LEVEL_A = 7, LEVEL_B = 4, LEVEL_C = 2 };

namespace SLEEP
{
	enum { WARNING = 400, WATING = 2000, CANCLE = 2000 };
}

const int NAME_LEN = 20;

#endif