#include <stdio.h>
#include <aterm2.h>
#include <srts/stratego.h>
#include <sglr.h>

#include "stratego_sglr.h"
#include "stratego_sglr_internal.h"

/**
 * Ambiguity
 */
ATerm STRSGLR_set_ambiguity_error_on(void)
{
  STRSGLR_ensure_init();
  SG_AMBIGUITY_ERROR_ON();
  return (ATerm) ATempty;
}

ATerm STRSGLR_set_ambiguity_error_off(void)
{
  STRSGLR_ensure_init();
  SG_AMBIGUITY_ERROR_OFF();
  return (ATerm) ATempty;
}

ATerm STRSGLR_get_ambiguity_error(void)
{
  STRSGLR_ensure_init();
  if(SG_AMBIGUITY_ERROR)
    return (ATerm) ATempty;
  else
    return NULL;
}

/**
 * Parse tree format
 */
ATerm STRSGLR_set_asfix2_format(void)
{
  STRSGLR_ensure_init();
  SG_ASFIX2ME_OFF();
  SG_ASFIX2_ON();
  return (ATerm) ATempty;
}

ATerm STRSGLR_set_asfix2me_format(void)
{
  STRSGLR_ensure_init();
  SG_ASFIX2_OFF();
  SG_ASFIX2ME_ON();
  return (ATerm) ATempty;
}

/**
 * Statistics
 */
ATerm STRSGLR_set_log_statistics_on(void)
{
  STRSGLR_ensure_init();
  SG_SHOWSTAT_ON();
  return (ATerm) ATempty;
}

ATerm STRSGLR_set_log_statistics_off(void)
{
  STRSGLR_ensure_init();
  SG_SHOWSTAT_OFF();
  return (ATerm) ATempty;
}

ATerm STRSGLR_get_log_statistics(void)
{
  STRSGLR_ensure_init();
  if(SG_SHOWSTAT)
    return (ATerm) ATempty;
  else
    return NULL;
}

/**
 * Log stream
 */
ATerm STRSGLR_set_log_stream(ATerm tstream)
{
  FILE* stream = stream_from_term(tstream);
  if(stream == NULL)
    return NULL;

  SG_SetLog(stream);
  return (ATerm) tstream;
}

