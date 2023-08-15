#pragma once

#include "opcodes.h"
#include <unordered_map>

static std::unordered_map<u16, std::string> instructions = {
    {Swp, "swp"},         {Swpz, "swpz"},         {Swpc, "swpc"},         {Swpv, "swpv"},
    {Add, "add"},         {Addz, "addz"},         {Addc, "addc"},         {Addv, "addv"},
    {Sub, "sub"},         {Subz, "subz"},         {Subc, "subc"},         {Subv, "subv"},
    {Mul, "mul"},         {Mulz, "mulz"},         {Mulc, "mulc"},         {Mulv, "mulv"},
    {Div, "div"},         {Divz, "divz"},         {Divc, "divc"},         {Divv, "divv"},
    {And, "and"},         {Andz, "andz"},         {Andc, "andc"},         {Andv, "andv"},
    {Or, "or"},           {Orz, "orz"},           {Orc, "orc"},           {Orv, "orv"},
    {Xor, "xor"},         {Xorz, "xorz"},         {Xorc, "xorc"},         {Xorv, "xorv"},
    {Not, "not"},         {Notz, "notz"},         {Notc, "notc"},         {Notv, "notv"},
    {Lsl, "lsl"},         {Lslz, "lslz"},         {Lslc, "lslc"},         {Lslv, "lslv"},
    {Lsr, "lsr"},         {Lsrz, "lsrz"},         {Lsrc, "lsrc"},         {Lsrv, "lsrv"},
    {Mod, "mod"},         {Modz, "modz"},         {Modc, "modc"},         {Modv, "modv"},
    {Jump, "jump"},       {Jumpz, "jumpz"},       {Jumpc, "jumpc"},       {Jumpv, "jumpv"},
    {Cmp, "cmp"},         {Cmpz, "cmpz"},         {Cmpc, "cmpc"},         {Cmpv, "cmpv"},
    {Pop, "pop"},         {Popz, "popz"},         {Popc, "popc"},         {Popv, "popv"},
    {Syscall, "syscall"}, {Syscallz, "syscallz"}, {Syscallc, "syscallc"}, {Syscallv, "syscallv"},
    {Alloc, "alloc"},     {Allocz, "allocz"},     {Allocc, "allocc"},     {Allocv, "allocv"},
    {Str, "str"},         {Strz, "strz"},         {Strc, "strc"},         {Strv, "strv"},
    {Ld, "ld"},           {Ldz, "ldz"},           {Ldc, "ldc"},           {Ldv, "ldv"}
};
