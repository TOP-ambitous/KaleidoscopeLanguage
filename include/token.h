
#ifndef KALE_TOKEN_H
#define KALE_TOKEN_H

namespace kale {

enum Token: unsigned {
  tok_eof = 256,           // --> 终结符 EOF

  // commands
  tok_def,                 // --> keyword def
  tok_extern,              // --> keyword extern
  tok_if,                  // --> keyword if
  tok_for,                 // --> keyword for
  tok_while,               // --> keyword while
  tok_else,                // --> keyword else
  tok_then,                // --> keyword then
  tok_in,                  // --> keyword in
  tok_return,              // --> keyword return
  tok_continue,            // --> keyword continue
  tok_break,               // --> keyword break
  tok_struct,              // --> keyword struct
  tok_switch,              // --> keyword switch
  tok_case,                // --> keyword case
  tok_default,             // --> keyword default
  tok_import,              // --> keyword import
  tok_const,               // --> keyword const

  
  tok_id,                  // --> identifier
  tok_fnumber,             // --> float number 
  tok_inumber,             // --> int number
  tok_true,                // --> true
  tok_false,               // --> false
  tok_charlit,             // --> char literal 'x' 
  tok_literal,             // --> string literal

  // type
  tok_void,                // --> type void
  tok_bool,                // --> type bool
  tok_char,                // --> type char
  tok_uchar,               // --> type uchar
  tok_short,               // --> type short
  tok_ushort,              // --> type ushort
  tok_int,                 // --> type int
  tok_uint,                // --> type uint
  tok_long,                // --> type long
  tok_ulong,               // --> type ulong
  tok_float,               // --> type float
  tok_double,              // --> type double

  // operator
  tok_add,                 // --> operator +
  tok_sub,                 // --> operator -
  tok_mul,                 // --> operator *
  tok_div,                 // --> operator /
  tok_assign,              // --> operator =
  tok_eq,                  // --> operator ==
  tok_neq,                 // --> operator !=
  tok_dot,                 // --> operator .
  tok_gt,                  // --> operator >
  tok_ge,                  // --> operator >=
  tok_lt,                  // --> operator <
  tok_le,                  // --> operator <=
  tok_not,                 // --> operator !
  tok_rh,                  // --> operator >>
  tok_urh,                 // --> operator >>>
  tok_lh,                  // --> operator <<
  tok_ulh,                 // --> operator <<<
  tok_or,                  // --> operator ||
  tok_and,                 // --> operator &&
  tok_bitor,               // --> operator |
  tok_bitand,              // --> operator &
  tok_bitxor               // --> operator ^
};

}

#endif


