#ifndef LUCE_HEADER_PREPROCESSOR_CONFIGURATION_INTEGERSIZE_HH
#define LUCE_HEADER_PREPROCESSOR_CONFIGURATION_INTEGERSIZE_HH
#include <Luce/Preprocessor/Configuration/IntegerSize-Value.hh>

#define LUCE_CONFIG_PP_INTEGER_SIZE LUCE_CONFIG_PP_1B

#define LUCE_MACRO_PP_IS_INT_1B (LUCE_CONFIG_PP_INTEGER_SIZE == LUCE_CONFIG_PP_1B)
#define LUCE_MACRO_PP_IS_INT_2B (LUCE_CONFIG_PP_INTEGER_SIZE == LUCE_CONFIG_PP_2B)

#endif