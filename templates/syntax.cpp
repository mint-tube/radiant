#include "../main.cpp"

// []       don't capture
// [&]      all by reference
// [=]      all by value
// [a, &b]  `a` by value, `b` by reference
auto lambda = [&](int a) -> int { return --a; };