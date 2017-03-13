#include "Tokenizer.h"

tstring Caps::lower (_T("абвгдеёжзийклмнопрстуфхцчшщъыьэюяіїєѓ"));
tstring Caps::upper (_T("АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯІЇЄЃ"));

Caps Caps::FirstCap = GetCaps (_T("Яя"));
Caps Caps::AllCaps  = GetCaps (_T("ЯЯ"));
Caps Caps::AllLower = GetCaps (_T("яя"));

tstring Tokenizer::Russian =   _T("абвгдеёжзийклмнопрстуфхцчшщъыьэюя");
tstring Tokenizer::Ukrainian = _T("абвгдежзийклмнопрстуфхцчшщьэюяіїєѓ");
tstring Tokenizer::Cyrillic =  _T("абвгдеёжзийклмнопрстуфхцчшщъыьэюяіїєѓ");

