/* arch.h: MUDOS_ARCH - a predefined macro exported to all LPC objects */

#ifdef __SEQUENT__
#define ARCH "Sequent"
#endif

#ifdef NeXT
#ifdef m68k
#define ARCH "NeXT/68k"
#else
#define ARCH "NeXT"
#endif
#endif

#ifdef _AIX
#define ARCH "AIX"
#endif

#ifdef accel
#define ARCH "Accel"
#endif

#if defined(sun) && !defined(SunOS_5)
#ifdef sun4
#define ARCH "Sun4"
#else

#ifdef sun3
#define ARCH "Sun3"
#else
#define ARCH "Sun"
#endif

#endif
#endif

#ifdef SunOS_5
#define ARCH "Solaris"
#endif
#ifdef __386BSD__
#define ARCH "386bsd"
#endif
#ifdef _AUX_SOURCE
#define ARCH "A/UX"
#endif
#ifdef linux
#define ARCH "Linux"
#endif
#ifdef hp68k
#define ARCH "HP/68k"
#endif
#ifdef hppa
#define ARCH "HP/PA-RISC"
#endif
#ifdef cray
#define ARCH "Cray"
#endif
#ifdef __alpha
#define ARCH "Alpha"
#endif

#if !defined(ARCH) && defined(ultrix)
#define ARCH "Ultrix"
#endif

#if !defined(ARCH) && defined(hpux)
#define ARCH "HP/UX"
#endif

#if !defined(ARCH) && defined(sgi)
#define ARCH "IRIX"
#endif

#if (!defined(ARCH) && defined(SVR4))
#define ARCH "SVR4"
#endif

#if defined(OSF) && !defined(ARCH)
#define ARCH "OSF/1"
#endif

#ifndef ARCH
#define ARCH "stuf!"
#endif