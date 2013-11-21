#ifndef UCG_CLCOMMON_H
#define UCG_CLCOMMON_H

#define CPU
#ifdef GPU
//!CL_BEGIN 11
#define GPU
inline void info(const char* where, const char* what){}
inline void bug(const char* where, const char* what){}
//!CL_END
#endif

#endif
