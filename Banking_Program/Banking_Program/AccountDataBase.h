#pragma once
#include "AccountData.h"
#include <vector>

AccountData ac0(0, "Ken Masters", 1000.00, 75.00);
AccountData ac1(1, "Laura Matsuda", 20000.00, 150.00);
AccountData ac2(2, "Juri Han", 50000.00, 35.00);
std::vector<AccountData> accounts = { ac0, ac1, ac2 };