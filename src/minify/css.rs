use crate::cfg::Cfg;

pub fn minify_css(cfg: &Cfg, out: &mut Vec<u8>, code: &[u8]) -> () {
    // TODO
    out.extend_from_slice(code);
}