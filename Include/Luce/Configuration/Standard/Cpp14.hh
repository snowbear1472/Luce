#ifndef LUCE_HEADER_CONFIGURATION_STANDARD_CPP14_HH
#define LUCE_HEADER_CONFIGURATION_STANDARD_CPP14_HH
#include <Luce/Configuration/Standard-Value.hh>

#ifdef LUCE_CONFIG_COMPILER
#error The standard configuration is invalid.
#endif

#define LUCE_CONFIG_STANDARD LUCE_CONFIG_CPP14

#define LUCE_MACRO_NO_EXCEPTION noexcept

#endif