#include "balance.hpp"
#include <string>

static bool is_balanced_rec(const std::string& s, int idx, int open) {
    if (open < 0) return false;
    if (idx == (int)s.size()) return open == 0;
    char c = s[idx];
    if (c == '(') return is_balanced_rec(s, idx+1, open+1);
    if (c == ')') return is_balanced_rec(s, idx+1, open-1);
    return is_balanced_rec(s, idx+1, open);
}

bool is_balanced(const std::string& s) {
    return is_balanced_rec(s, 0, 0);
}
