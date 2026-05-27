#include "../main.cpp"

// []       don't capture
// [&]      capture by reference
// [=]      capture by value
// [a, &b]  capture `a` by value, `b` by reference
auto lambda = [&](int a) -> int { return --a; };
