/////////////////////////////////////////////////////////////////////
// File    : SyncDefines.h
// Desc    : Sync debugging defines
// Created : November 22, 2002
// Author  : dswinerd
// 
// (c) 2002 Relic Entertainment Inc.
//

// * a basic Entity class for Sigma


#pragma once

/////////////////////////////////////////////////////////////////////////////////////////
// Flags
/////////////////////////////////////////////////////////////////////////////////////////
#if !defined( RELIC_RTM )
	#define EXTREME_SYNC_LOGGING 1		// if 1 the extreme sync logging code is compiled in.  Use command-line "-SyncLog" to enable
#endif
