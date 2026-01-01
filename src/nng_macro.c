/* Macro replacements for Fortran bindings. */
#include <nng/nng.h>

#ifdef __cplusplus
extern "C" {
#endif

void nng_log_auth_(nng_log_level, const char *, const char *);
void nng_log_debug_(const char *, const char *);
void nng_log_err_(const char *, const char *);
void nng_log_info_(const char *, const char *);
void nng_log_notice_(const char *, const char *);
void nng_log_warn_(const char *, const char *);

void nng_log_auth_(nng_log_level level, const char *msgid, const char *msg)
{
    nng_log_auth(level, msgid, msg);
}

void nng_log_debug_(const char *msgid, const char *msg)
{
    nng_log_debug(msgid, msg);
}

void nng_log_err_(const char *msgid, const char *msg)
{
    nng_log_err(msgid, msg);
}

void nng_log_info_(const char *msgid, const char *msg)
{
    nng_log_info(msgid, msg);
}

void nng_log_notice_(const char *msgid, const char *msg)
{
    nng_log_notice(msgid, msg);
}

void nng_log_warn_(const char *msgid, const char *msg)
{
    nng_log_warn(msgid, msg);
}

#ifdef __cplusplus
}
#endif
