// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//
#pragma once

// mmsystem.h
#define MMNOSOUND
#define MMNOMIDI
#define MMNOAUX
#define MMNOMIXER
#define MMNOJOY
#include <mmsystem.h>

// mmreg.h
#define NOMMIDS
#define NONEWRIFF
#define NOJPEGDIB
#define NONEWIC
#define NOBITMAP
#include <mmreg.h>

#include <vorbis/codec.h>
#include <vorbis/vorbisfile.h>

#include "../../xrcore/xr_resource.h"

#ifdef _EDITOR    
# 	include "ETools.h"
#endif
// TODO: reference additional headers your program requires here
