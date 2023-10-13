//
// pch.h
//

#pragma once

#include "gtest/gtest.h"

#include <iostream>
#include <string>
#include <algorithm>
#include <assert.h>

int get_max(int a, int b, int c);
void get_bit_a_to_b(int a, int& b);
int get_min_from_bits(int a);
int get_sum_of_not_even_elements_down_general_diag_in_matrix(int** matrix, int size_a, int size_b);