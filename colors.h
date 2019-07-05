/*
 *        File: colors.h
 *      Author: Nasseef Abukamail
 *        Date: July 04, 2019
 * Description: Defines colors to be used in C++. Examples are provided 
 *              in the comments below.
 *              To use: #include "colors.h"
 */
#ifndef COLORS_H
#define COLORS_H

/* Colors
 * Example: Change the color to RED and reset it when done.
 *          cout << RED << 5 << 5.6 << someVar << "text" << RST;
 */
#define RST  "\33[0m"         
#define RED  "\33[31m"         
#define GRN  "\33[32m"
#define YEL  "\33[33m"
#define BLU  "\33[34m"
#define MAG  "\33[35m"
#define CYN  "\33[36m"
#define WHT  "\33[37m"

/*
 * Forground colors
 * change the forground color. For example to change the color to red:
 *      cout << FRED("Some text");
 */
#define FRED(text) RED text RST       //
#define FGRN(text) GRN text RST
#define FYEL(text) YEL text RST
#define FBLU(text) BLU text RST
#define FMAG(text) MAG text RST
#define FCYN(text) CYN text RST
#define FWHT(text) WHT text RST


/* 
 * background colors 
 * Change the background color of the test.
 * Example 1: Change the background color to red
 *              cout << BRED("Some text");
 * 
 * Example 2: Change the forground to yellow and background to green
 *              cout << BGRN(FYEL("Some text"));
 */
#define BBLK(text) "\33[40m" text RST
#define BRED(text) "\33[41m" text RST
#define BGRN(text) "\33[42m" text RST
#define BYEL(text) "\33[43m" text RST
#define BBLU(text) "\33[44m" text RST
#define BMAG(text) "\33[45m" text RST
#define BCYN(text) "\33[46m" text RST
#define BWHT(text) "\33[47m" text RST


/*
 * Bold, underline, and inv
 * Example: 
 *      cout << INV("some text");
 */
#define BLD(text) "\33[1m" text RST
#define UND(text) "\33[4m" text RST
#define INV(text) "\33[7m" text RST


#endif  /* COLORS_H */