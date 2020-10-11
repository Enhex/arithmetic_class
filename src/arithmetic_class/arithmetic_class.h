#pragma once

#include <utility>

template <typename T>
struct arithmetic_class
{
	T value;

	arithmetic_class() = default;
	constexpr arithmetic_class(const T& new_value) : value(new_value) {}
	constexpr arithmetic_class(T&& new_value) : value(std::forward<T>(new_value)) {}

	// Implicitly convert to the underlying value
	operator T& () noexcept { return value; }
	constexpr operator const T& () const noexcept { return value; }

	// Operators
	T& operator++() { return ++value; }
	T operator++(int) { return value++; }

	T& operator--() { return --value; }
	T operator--(int) { return value--; }
};