#ifndef LUCE_HEADER_CONFIGURATION_STANDARD_CPP03_HH
#define LUCE_HEADER_CONFIGURATION_STANDARD_CPP03_HH
#include <Luce/Configuration/Standard-Value.hh>

#ifdef LUCE_CONFIG_COMPILER
#error The standard configuration is invalid.
#endif

#define LUCE_CONFIG_COMPILER LUCE_MACRO_CPP03

#define LUCE_MACRO_NO_EXCEPTION throw()
#define LUCE_MACRO_CONST_FUNCTION const

#endif