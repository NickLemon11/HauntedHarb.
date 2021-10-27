// header.h : include file for standard system include files,
// or project specific include files


#pragma once

#include "targetver.h"
#define WIN32_LEAN_AND_MEAN   
#define GROUND 450
#define GRAVITY 2
#define PSPEED 10
#define ESPEED (PSPEED / 2)
extern int mpos; //Map Position
// Windows Header Files
#include <windows.h>
// C RunTime Header Files
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>
#include <atlstr.h>
#include <atlimage.h>
#include <list>
#include <string>
#define list std::list
#define string std::string
#define add push_back
