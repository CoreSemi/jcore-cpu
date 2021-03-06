/*
 *  Copyright (C) 1991, 1992  Linus Torvalds
 */

/*
 * D. Jeff Dionne, 1995.
 */

/* Additional hole filled: strtol
 * M. Schlifer, NOV 1995.
*/

#include <string.h>
#include <ctype.h>

#ifndef __HAVE_ARCH_BCOPY
char * bcopy(const char * src, char * dest, int count)
{
  char *tmp = dest;
  
  while (count--)
    *tmp++ = *src++;
  
  return dest;
}
#endif
