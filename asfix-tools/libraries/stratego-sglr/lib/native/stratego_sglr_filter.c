#include <stdio.h>
#include <aterm2.h>
#include <srts/stratego.h>
#include <sglr.h>

#include "stratego_sglr.h"
#include "stratego_sglr_internal.h"

ATerm STRSGLR_set_default_filters(void)
{
  SG_FILTER_ASSOCIATIVITY_ON();
  SG_FILTER_DIRECTEAGERNESS_ON();
  SG_FILTER_PRIORITY_ON();
  SG_FILTER_REJECT_ON();

  SG_FILTER_EAGERNESS_OFF();
  SG_FILTER_INJECTIONCOUNT_OFF();

  return (ATerm) ATempty;
}

/**
 * Eagerness filter
 */
ATerm STRSGLR_set_filter_eagernes_on(void)
{
  SG_FILTER_EAGERNESS_ON();
  return (ATerm) ATempty;
}

ATerm STRSGLR_set_filter_eagernes_off(void)
{
  SG_FILTER_EAGERNESS_OFF();
  return (ATerm) ATempty;
}

ATerm STRSGLR_get_filter_eagernes(void)
{
  if(SG_FILTER_EAGERNESS)
    return (ATerm) ATempty;
  else
    return NULL;
}

/**
 * Direct eagerness filter
 */
ATerm STRSGLR_set_filter_direct_eagernes_on(void)
{
  SG_FILTER_DIRECTEAGERNESS_ON();
  return (ATerm) ATempty;
}

ATerm STRSGLR_set_filter_direct_eagernes_off(void)
{
  SG_FILTER_DIRECTEAGERNESS_OFF();
  return (ATerm) ATempty;
}

ATerm STRSGLR_get_filter_direct_eagernes(void)
{
  if(SG_FILTER_DIRECTEAGERNESS)
    return (ATerm) ATempty;
  else
    return NULL;
}

/**
 * Priority
 */
ATerm STRSGLR_set_filter_priority_on(void)
{
  SG_FILTER_PRIORITY_ON();
  return (ATerm) ATempty;
}

ATerm STRSGLR_set_filter_priority_off(void)
{
  SG_FILTER_PRIORITY_OFF();
  return (ATerm) ATempty;
}

ATerm STRSGLR_get_filter_priority(void)
{
  if(SG_FILTER_PRIORITY)
    return (ATerm) ATempty;
  else
    return NULL;
}

/**
 * Injection count
 */
ATerm STRSGLR_set_filter_injection_count_on(void)
{
  SG_FILTER_INJECTIONCOUNT_ON();
  return (ATerm) ATempty;
}

ATerm STRSGLR_set_filter_injection_count_off(void)
{
  SG_FILTER_INJECTIONCOUNT_OFF();
  return (ATerm) ATempty;
}

ATerm STRSGLR_get_filter_injection_count(void)
{
  if(SG_FILTER_INJECTIONCOUNT)
    return (ATerm) ATempty;
  else
    return NULL;
}

/**
 * Associativity
 */
ATerm STRSGLR_set_filter_associativity_on(void)
{
  SG_FILTER_ASSOCIATIVITY_ON();
  return (ATerm) ATempty;
}

ATerm STRSGLR_set_filter_associativity_off(void)
{
  SG_FILTER_ASSOCIATIVITY_OFF();
  return (ATerm) ATempty;
}

ATerm STRSGLR_get_filter_associativity(void)
{
  if(SG_FILTER_ASSOCIATIVITY)
    return (ATerm) ATempty;
  else
    return NULL;
}


/**
 * Reject
 */
ATerm STRSGLR_set_filter_reject_on(void)
{
  SG_FILTER_REJECT_ON();
  return (ATerm) ATempty;
}

ATerm STRSGLR_set_filter_reject_off(void)
{
  SG_FILTER_REJECT_OFF();
  return (ATerm) ATempty;
}

ATerm STRSGLR_get_filter_reject(void)
{
  if(SG_FILTER_REJECT)
    return (ATerm) ATempty;
  else
    return NULL;
}

/**
 * Ambiguity
 */
ATerm STRSGLR_set_ambiguity_error_on(void)
{
  SG_AMBIGUITY_ERROR_ON();
  return (ATerm) ATempty;
}

ATerm STRSGLR_set_ambiguity_error_off(void)
{
  SG_AMBIGUITY_ERROR_OFF();
  return (ATerm) ATempty;
}

ATerm STRSGLR_get_ambiguity_error(void)
{
  if(SG_AMBIGUITY_ERROR)
    return (ATerm) ATempty;
  else
    return NULL;
}
