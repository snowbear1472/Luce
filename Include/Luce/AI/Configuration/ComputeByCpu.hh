#ifndef LUCE_HEADER_AI_CONFIGURATION_COMPUTEBYCPU_HH
#define LUCE_HEADER_AI_CONFIGURATION_COMPUTEBYCPU_HH
#include <Luce/AI/Configuration/ComputeByCpu-Value.hh>

#define LUCE_CONFIG_COMPUTE_BY_CPU_MODE LUCE_CONFIG_AI_BASIC

#define LUCE_MACRO_AI_IS_CPU_BASIC (LUCE_CONFIG_COMPUTE_BY_CPU_MODE == LUCE_CONFIG_AI_BASIC)
#define LUCE_MACRO_AI_IS_CPU_TBB (LUCE_CONFIG_COMPUTE_BY_CPU_MODE == LUCE_CONFIG_AI_TBB)
#define LUCE_MACRO_AI_IS_CPU_OMP (LUCE_CONFIG_COMPUTE_BY_CPU_MODE == LUCE_CONFIG_AI_OMP)

#endif