/*================================================================================
	
	----------------------------------------------------------
	-*- Zombie Plague 5.0 Compatibility Layer Include File -*-
	----------------------------------------------------------
	
	Objective:
	----------
	To use sub-plugins designed for ZP 4.3, it should be enough to
	enable the zp50_zp43_compat.amxx module. There should be no need
	to recompile (ideally!).
	
	If something can't be done through that method, maybe we can fix it with
	this include file, and a need for recompile will be needed only then...
	
	TODO:
	- zp_has_round_started (return 2? is that needed?)
	
================================================================================*/

#if defined _zp50_zp43_compat_included
  #endinput
#endif
#define _zp50_zp43_compat_included

#include <zp50_core>

#if AMXX_VERSION_NUM >= 175
	#pragma reqlib zp50_zp43_compat
	#if !defined AMXMODX_NOAUTOLOAD
		#pragma loadlib zp50_zp43_compat
	#endif
#else
	#pragma library zp50_zp43_compat
#endif
