#ifndef _HDR_HYPERBUILD_RULE_UNQUOTEDATTRVAL
#define _HDR_HYPERBUILD_RULE_UNQUOTEDATTRVAL

#include "../../ext/nicehash/set/int32.h"
#include "../../util/hbchar.h"
#include "./whitespace.c"

static nh_set_int32_t hb_r_unquotedattrval_set;

void hb_r_unquotedattrval_init(void) {
  hb_r_unquotedattrval_set = nh_set_int32_create();
  hb_r_whitespace_add_elems(hb_r_unquotedattrval_set);
  nh_set_int32_add(hb_r_unquotedattrval_set, '"');
  nh_set_int32_add(hb_r_unquotedattrval_set, '\'');
  nh_set_int32_add(hb_r_unquotedattrval_set, '`');
  nh_set_int32_add(hb_r_unquotedattrval_set, '=');
  nh_set_int32_add(hb_r_unquotedattrval_set, '<');
  nh_set_int32_add(hb_r_unquotedattrval_set, '>');
}

int hb_r_unquotedattrval_check(hb_char_t c) {
}

#endif // _HDR_HYPERBUILD_RULE_UNQUOTEDATTRVAL
