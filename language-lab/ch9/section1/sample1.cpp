//Section 1: Seperate compilation; Source files and Programs

/** 
 * Names of functions, classes, templates,variables, namespaces, enumerations, 
 * and enumerators must be used consistently across all translation units
 * unless they are explicitly specified to be local.
 *
 **/

/**
 * One simple method for achieving consistency for declarations 
 * in different translation units is to #include header files 
 * containing interface information in source files 
 * containing executable code and/or data definitions.
 *
 **/
#include "to_be_included"
/**
 * The #include mechanism is a text manipulation facility for gathering source program fragments
 * together into a single unit(file) for compilation.
 *
 * To include standard library headers, use the angle brackets < and > around the name
 * instead of " " quotes.
 **/

 #include <iostream>        //from the standard lib include directory
 #include "myheader.h"      //from current directory

