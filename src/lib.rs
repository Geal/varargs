#![allow(non_camel_case_types)]
extern crate libc;

// warning: probably not portable
pub type va_list = libc::c_void;

extern {
  pub fn double_input(input: libc::c_int) -> libc::c_int;
  pub fn transform(list: *mut va_list, ...);
  pub fn end(list: *mut va_list);
}

