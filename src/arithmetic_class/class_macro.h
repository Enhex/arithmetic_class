#include "arithmetic_class.h"
#include <cstdint>

#define INT_FAST_CLASS(bits) struct int##bits##_fast : arithmetic_class<int_fast##bits##_t>\
{ using arithmetic_class<int_fast##bits##_t>::arithmetic_class; };

#define UINT_FAST_CLASS(bits) struct uint##bits##_fast : arithmetic_class<uint_fast##bits##_t>\
{ using arithmetic_class<uint_fast##bits##_t>::arithmetic_class; };

#define INT_LEAST_CLASS(bits) struct int##bits##_least : arithmetic_class<int_least##bits##_t>\
{ using arithmetic_class<int_least##bits##_t>::arithmetic_class; };

#define UINT_LEAST_CLASS(bits) struct uint##bits##_least : arithmetic_class<uint_least##bits##_t>\
{ using arithmetic_class<uint_least##bits##_t>::arithmetic_class; };
