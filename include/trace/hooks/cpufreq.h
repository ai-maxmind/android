/* SPDX-License-Identifier: GPL-2.0 */
#undef TRACE_SYSTEM
#define TRACE_SYSTEM cpufreq

#define TRACE_INCLUDE_PATH trace/hooks

#if !defined(_TRACE_HOOK_CPUFREQ_H) || defined(TRACE_HEADER_MULTI_READ)
#define _TRACE_HOOK_CPUFREQ_H

#include <trace/hooks/vendor_hooks.h>

struct cpufreq_policy;

DECLARE_RESTRICTED_HOOK(android_rvh_show_max_freq,
	TP_PROTO(struct cpufreq_policy *policy, unsigned int *max_freq),
	TP_ARGS(policy, max_freq), 1);

DECLARE_HOOK(android_vh_cpufreq_online,
	TP_PROTO(struct cpufreq_policy *policy),
	TP_ARGS(policy));

#endif /* _TRACE_HOOK_CPUFREQ_H */
/* This part must be outside protection */
#include <trace/define_trace.h>
