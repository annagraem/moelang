#ifndef _MOE_MOE_KYUUN_H_
#define _MOE_MOE_KYUUN_H_

#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>

/* Redefine keywords */
#define korosu      break
//#define case
#define kyarakutaa  char
#define zutto       const
#define tsugi       continue
//#define default
//#define do
#define dottoookii  double
#define sorekara    else
//#define enum
#define dottobangou float
#define motto       for
#define ikou        goto
#define tabun       if
#define bangou      int
#define ookii       long
#define kaere       return
#define chiisai     short
//#define sizeof
#define kazoku      struct
#define tokidoki    switch
#define namaeha     typedef
//#define unsigned
#define nanimo      void
#define banzai      while

#define desu ;
#define no .
#define hai 1
#define iie 0
#define uso !
#define onaji ==
#define ha =
#define nai NULL

#define hajimete main



/* auto, extern, register, signed, static, union, volatile
    are not redefined */

#define hanashitekudasai(format, ...) printf(format, ##__VA_ARGS__)

#define deru(code) exit(code)

#define kodomo() fork()
#define matte(wstatus) wait(wstatus)
#define hikikomori case -1
#define musuko case 0
#define otoosan default

/* Redefine functions */
// printf
/*int hanashite(const char *format, ...);*/

#endif // #ifndef _MOE_MOE_KYUUN_H_
