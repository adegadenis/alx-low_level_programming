#ifndef _HEADER_
#define _HEADER_

/*
 * File: 3-function_like_macro.h
 *
 * Desc: Header file that defines a function-like macro ABS(x)
 *       that computes the absolute value of a number x.
*/

#define ABS(x) ((x) < 0 ? ((x) * -1) : (x))
#endif
