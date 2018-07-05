#ifndef _HDR_HYPERBUILD_RULE_TAGS
#define _HDR_HYPERBUILD_RULE_TAGS

#include "../../ext/nicehash/set/str.h"
#include "../../util/hbchar.h"

// Sourced from https://developer.mozilla.org/en-US/docs/Web/HTML/Element at 2018-07-01T05:55:00Z

static nh_set_str_t hb_r_tags_set;

void hb_r_tags_init(void) {
  hb_r_tags_set = nh_set_str_create();
  nh_set_str_add(hb_r_tags_set, "a");
  nh_set_str_add(hb_r_tags_set, "abbr");
  nh_set_str_add(hb_r_tags_set, "acronym");
  nh_set_str_add(hb_r_tags_set, "address");
  nh_set_str_add(hb_r_tags_set, "applet");
  nh_set_str_add(hb_r_tags_set, "applet");
  nh_set_str_add(hb_r_tags_set, "area");
  nh_set_str_add(hb_r_tags_set, "article");
  nh_set_str_add(hb_r_tags_set, "aside");
  nh_set_str_add(hb_r_tags_set, "audio");
  nh_set_str_add(hb_r_tags_set, "b");
  nh_set_str_add(hb_r_tags_set, "basefont");
  nh_set_str_add(hb_r_tags_set, "bdi");
  nh_set_str_add(hb_r_tags_set, "bdo");
  nh_set_str_add(hb_r_tags_set, "bgsound");
  nh_set_str_add(hb_r_tags_set, "big");
  nh_set_str_add(hb_r_tags_set, "blink");
  nh_set_str_add(hb_r_tags_set, "blockquote");
  nh_set_str_add(hb_r_tags_set, "body");
  nh_set_str_add(hb_r_tags_set, "br");
  nh_set_str_add(hb_r_tags_set, "button");
  nh_set_str_add(hb_r_tags_set, "canvas");
  nh_set_str_add(hb_r_tags_set, "caption");
  nh_set_str_add(hb_r_tags_set, "center");
  nh_set_str_add(hb_r_tags_set, "cite");
  nh_set_str_add(hb_r_tags_set, "code");
  nh_set_str_add(hb_r_tags_set, "col");
  nh_set_str_add(hb_r_tags_set, "colgroup");
  nh_set_str_add(hb_r_tags_set, "command");
  nh_set_str_add(hb_r_tags_set, "content");
  nh_set_str_add(hb_r_tags_set, "content");
  nh_set_str_add(hb_r_tags_set, "data");
  nh_set_str_add(hb_r_tags_set, "datalist");
  nh_set_str_add(hb_r_tags_set, "dd");
  nh_set_str_add(hb_r_tags_set, "del");
  nh_set_str_add(hb_r_tags_set, "details");
  nh_set_str_add(hb_r_tags_set, "dfn");
  nh_set_str_add(hb_r_tags_set, "dialog");
  nh_set_str_add(hb_r_tags_set, "dir");
  nh_set_str_add(hb_r_tags_set, "dir");
  nh_set_str_add(hb_r_tags_set, "div");
  nh_set_str_add(hb_r_tags_set, "dl");
  nh_set_str_add(hb_r_tags_set, "dt");
  nh_set_str_add(hb_r_tags_set, "element");
  nh_set_str_add(hb_r_tags_set, "element");
  nh_set_str_add(hb_r_tags_set, "em");
  nh_set_str_add(hb_r_tags_set, "embed");
  nh_set_str_add(hb_r_tags_set, "fieldset");
  nh_set_str_add(hb_r_tags_set, "figcaption");
  nh_set_str_add(hb_r_tags_set, "figure");
  nh_set_str_add(hb_r_tags_set, "font");
  nh_set_str_add(hb_r_tags_set, "footer");
  nh_set_str_add(hb_r_tags_set, "form");
  nh_set_str_add(hb_r_tags_set, "frame");
  nh_set_str_add(hb_r_tags_set, "frameset");
  nh_set_str_add(hb_r_tags_set, "h1");
  nh_set_str_add(hb_r_tags_set, "h2");
  nh_set_str_add(hb_r_tags_set, "h3");
  nh_set_str_add(hb_r_tags_set, "h4");
  nh_set_str_add(hb_r_tags_set, "h5");
  nh_set_str_add(hb_r_tags_set, "h6");
  nh_set_str_add(hb_r_tags_set, "header");
  nh_set_str_add(hb_r_tags_set, "hgroup");
  nh_set_str_add(hb_r_tags_set, "hr");
  nh_set_str_add(hb_r_tags_set, "html");
  nh_set_str_add(hb_r_tags_set, "i");
  nh_set_str_add(hb_r_tags_set, "iframe");
  nh_set_str_add(hb_r_tags_set, "image");
  nh_set_str_add(hb_r_tags_set, "img");
  nh_set_str_add(hb_r_tags_set, "input");
  nh_set_str_add(hb_r_tags_set, "ins");
  nh_set_str_add(hb_r_tags_set, "isindex");
  nh_set_str_add(hb_r_tags_set, "kbd");
  nh_set_str_add(hb_r_tags_set, "keygen");
  nh_set_str_add(hb_r_tags_set, "label");
  nh_set_str_add(hb_r_tags_set, "legend");
  nh_set_str_add(hb_r_tags_set, "li");
  nh_set_str_add(hb_r_tags_set, "link");
  nh_set_str_add(hb_r_tags_set, "listing");
  nh_set_str_add(hb_r_tags_set, "main");
  nh_set_str_add(hb_r_tags_set, "map");
  nh_set_str_add(hb_r_tags_set, "mark");
  nh_set_str_add(hb_r_tags_set, "marquee");
  nh_set_str_add(hb_r_tags_set, "menu");
  nh_set_str_add(hb_r_tags_set, "menuitem");
  nh_set_str_add(hb_r_tags_set, "menuitem");
  nh_set_str_add(hb_r_tags_set, "meta");
  nh_set_str_add(hb_r_tags_set, "meter");
  nh_set_str_add(hb_r_tags_set, "multicol");
  nh_set_str_add(hb_r_tags_set, "nav");
  nh_set_str_add(hb_r_tags_set, "nextid");
  nh_set_str_add(hb_r_tags_set, "nobr");
  nh_set_str_add(hb_r_tags_set, "noembed");
  nh_set_str_add(hb_r_tags_set, "noembed");
  nh_set_str_add(hb_r_tags_set, "noframes");
  nh_set_str_add(hb_r_tags_set, "noscript");
  nh_set_str_add(hb_r_tags_set, "object");
  nh_set_str_add(hb_r_tags_set, "ol");
  nh_set_str_add(hb_r_tags_set, "optgroup");
  nh_set_str_add(hb_r_tags_set, "option");
  nh_set_str_add(hb_r_tags_set, "output");
  nh_set_str_add(hb_r_tags_set, "p");
  nh_set_str_add(hb_r_tags_set, "param");
  nh_set_str_add(hb_r_tags_set, "picture");
  nh_set_str_add(hb_r_tags_set, "plaintext");
  nh_set_str_add(hb_r_tags_set, "pre");
  nh_set_str_add(hb_r_tags_set, "progress");
  nh_set_str_add(hb_r_tags_set, "q");
  nh_set_str_add(hb_r_tags_set, "rp");
  nh_set_str_add(hb_r_tags_set, "rt");
  nh_set_str_add(hb_r_tags_set, "rtc");
  nh_set_str_add(hb_r_tags_set, "ruby");
  nh_set_str_add(hb_r_tags_set, "s");
  nh_set_str_add(hb_r_tags_set, "samp");
  nh_set_str_add(hb_r_tags_set, "script");
  nh_set_str_add(hb_r_tags_set, "section");
  nh_set_str_add(hb_r_tags_set, "select");
  nh_set_str_add(hb_r_tags_set, "shadow");
  nh_set_str_add(hb_r_tags_set, "shadow");
  nh_set_str_add(hb_r_tags_set, "slot");
  nh_set_str_add(hb_r_tags_set, "small");
  nh_set_str_add(hb_r_tags_set, "source");
  nh_set_str_add(hb_r_tags_set, "spacer");
  nh_set_str_add(hb_r_tags_set, "span");
  nh_set_str_add(hb_r_tags_set, "strike");
  nh_set_str_add(hb_r_tags_set, "strong");
  nh_set_str_add(hb_r_tags_set, "style");
  nh_set_str_add(hb_r_tags_set, "sub");
  nh_set_str_add(hb_r_tags_set, "summary");
  nh_set_str_add(hb_r_tags_set, "sup");
  nh_set_str_add(hb_r_tags_set, "table");
  nh_set_str_add(hb_r_tags_set, "tbody");
  nh_set_str_add(hb_r_tags_set, "td");
  nh_set_str_add(hb_r_tags_set, "template");
  nh_set_str_add(hb_r_tags_set, "textarea");
  nh_set_str_add(hb_r_tags_set, "tfoot");
  nh_set_str_add(hb_r_tags_set, "th");
  nh_set_str_add(hb_r_tags_set, "thead");
  nh_set_str_add(hb_r_tags_set, "time");
  nh_set_str_add(hb_r_tags_set, "title");
  nh_set_str_add(hb_r_tags_set, "tr");
  nh_set_str_add(hb_r_tags_set, "track");
  nh_set_str_add(hb_r_tags_set, "tt");
  nh_set_str_add(hb_r_tags_set, "tt");
  nh_set_str_add(hb_r_tags_set, "u");
  nh_set_str_add(hb_r_tags_set, "ul");
  nh_set_str_add(hb_r_tags_set, "var");
  nh_set_str_add(hb_r_tags_set, "video");
  nh_set_str_add(hb_r_tags_set, "wbr");
  nh_set_str_add(hb_r_tags_set, "xmp");
}

int hb_r_tags_check(hb_char_t *tag) {
  return nh_set_str_has(hb_r_tags_set, (char *) tag);
}

#endif // _HDR_HYPERBUILD_RULE_TAGS
