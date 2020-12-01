#include <stdio.h>
#include "CUnit/Basic.h"
#include "odd_or_even.h"
#include "rectangle_geometry.h"
#include "integers_relationships.h"
#include "diameter_of_a_circle.h"

void test_detect_even_numbers() {
   int even_number = 2;

   CU_ASSERT(odd_or_even(even_number) == 1);
}

void test_detect_odd_numbers() {
   int odd_number = 3;

   CU_ASSERT(odd_or_even(odd_number) == 0);
}

void test_rectangle_calc_perimeter() {
   CU_ASSERT(rectangle_calc_perimeter(10.50, 15.50) == 52);
}

void test_rectangle_calc_perimeter() {
   CU_ASSERT(rectangle_calc_perimeter(10.50, 15.50) == 52);
}

void test_rectangle_calc_perimeter() {
   CU_ASSERT(rectangle_calc_perimeter(10.50, 15.50) == 52);
}

void test_ints_is_greather() {
   CU_ASSERT(ints_greather(10.50, 15.50) == 52);
}

void test_diameter_of_a_circle_calc_diameter() {
   CU_ASSERT(circle_calc_diameter(4) == 16);
}

int main() {
   if (CUE_SUCCESS != CU_initialize_registry()) {
     return CU_get_error();
   }

   CU_pSuite tests_suite = CU_add_suite("Chapter 2 Library", NULL, NULL);

   CU_add_test(tests_suite, "detects odd number", test_detect_odd_numbers);
   CU_add_test(tests_suite, "detects even number", test_detect_even_numbers);
   CU_add_test(tests_suite, "calcs a rectangle's perimeter", test_rectangle_calc_perimeter);
   CU_add_test(tests_suite, "diameter_of_a_cirle: calc diameter", test_diameter_of_a_circle_calc_diameter);

   CU_basic_set_mode(CU_BRM_VERBOSE);
   CU_basic_run_tests();
   CU_cleanup_registry();

   return CU_get_error();
}
