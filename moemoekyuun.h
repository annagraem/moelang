#ifndef _MOE_MOE_KYUUN_H_
#define _MOE_MOE_KYUUN_H_

#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <time.h>

/**************************
 *                        *
 *        KEYWORDS        *
 *                        *
 **************************/

#define kowasu      break
#define doki        case
#define kyarakutaa  char
#define zutto       const
#define tsugi       continue
#define nasai       do
#define dottoookii  double
#define sorekara    else
#define risuto      enum
#define dottobangou float
#define motto       for
#define ikou        goto
#define tabun       if
#define bangou      int
#define ookii       long
#define kaere       return
#define chiisai     short
#define saizuofu    sizeof
#define kazoku      struct
#define toki        switch
#define namaeha     typedef
#define pojichibu   unsigned
#define nanimo      void
#define banzai      while

/* auto, default, extern, register, signed, static, union, volatile
    are not redefined */

/**************************
 *                        *
 *   SPECIAL CHARACTERS   *
 *                        *
 **************************/

#define desu ;
#define no .
#define hai 1
#define iie 0
#define nai 0   /* Used instead of NULL */
#define uso !
#define onaji ==
#define ha =

/**************************
 *                        *
 *   MOST USED FUNCTIONS  *
 *                        *
 **************************/

/* I/O functions */
#define hanashitekudasai(format, ...) printf(format, ##__VA_ARGS__)
#define kiitekudasai(format, ...) scanf(format, ##__VA_ARGS__)
#define sukoshihanashite() getchar()
#define sukoshikiite(ch) putchar(ch)
#define taihendesuyo(str) perror(str)
// sscanf, sprintf, fopen, fclose, fread

/* String functions */
#define kyarafyuujon(dest, src) strcat(dest, src)
#define kyaraonaji(str1, str2) strcmp(str1, str2)
#define kyarakopii(dest, src) strcpy(dest, src)
#define kyarasagashite(str1, str2) strstr(str1, str2)

/* Math functions */
// cos, sin, tan, exp, pow, sqrt

/* Random functions */
#define jikan(t) time(t)
#define gacha() rand()
#define gachapon(t) srand(t)

/* Process functions */
#define kodomo() fork()
#define matte(wstatus) wait(wstatus)
#define hikikomori case -1
#define musuko case 0
#define otoosan default

/* Memory functions */
#define sashiagete(n) malloc(n)
#define risutowosashiagete(n, m) calloc(n, m)
#define hima(ptr) free(ptr)

/* Other functions */
#define hajimete main
#define deru(code) exit(code)
#define bangounikawaru(str) atoi(str)
#define nemuru(n) sleep(n)
// qsort, system

#endif // #ifndef _MOE_MOE_KYUUN_H_
