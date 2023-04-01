/*
 * File:   newcunittest.c
 * Author: pmg
 *
 * Created on 2012-apr-24, 00:43:52
 */

#include <stdio.h>
#include <stdlib.h>
#include "CUnit/Basic.h"

#include "channel.h"
#include "alarm.h"
#include "mmmotor.h"

CHANNEL *ch1, *ch2;


/*
 * Channel test suite
 */

int init_channelSuite(void) {
  ch1 = malloc(sizeof(CHANNEL));
  ch2 = malloc(sizeof(CHANNEL));
  return 0;
}

int clean_channelSuite(void) {
  free(ch1);
  free(ch2);
  return 0;
}

void channelTest() {
  channelInit(ch1);
  channelInit(ch2);
  
  // test simple set value of channel
  channelSetValue(ch1, 1.32);
  CU_ASSERT_DOUBLE_EQUAL(channelGetValue(ch1), 1.32, 0.001);
  channelSetValue(ch1, -8903);
  CU_ASSERT_DOUBLE_EQUAL(channelGetValue(ch1), -8903, 0.001);
  
  // test simple update value
  channelUpdate(ch1, 321.321, 1);
  CU_ASSERT_DOUBLE_EQUAL(channelGetValue(ch1), 321.321, 0.0001);
  
  
  // test update connected value
  channelSetConnection(ch1, ch2);
  channelSetValue(ch2, 123.123);
  channelUpdate(ch1,-98765, 1);
  CU_ASSERT_DOUBLE_EQUAL(channelGetValue(ch1), 123.123, 0.0001);
  
  
  //CU_ASSERT_EQUAL()
  //CU_ASSERT(2 * 2 == 4);
  
}

void channelAdvancedTests() {
  channelInit(ch1);
  channelInit(ch2);
  
  // test max value
  channelSetMode(ch1, CHANNEL_MODE_MAX);
  channelSetValue(ch1, 21);
  CU_ASSERT_DOUBLE_EQUAL(channelGetValue(ch1), 21, 0.001);
  channelUpdate(ch1, 22, 1);
  CU_ASSERT_DOUBLE_EQUAL(channelGetValue(ch1), 22, 0.001);
  channelUpdate(ch1, 19, 1);
  CU_ASSERT_DOUBLE_EQUAL(channelGetValue(ch1), 22, 0.001);
 
  // test min value
  channelSetMode(ch1, CHANNEL_MODE_MIN);
  channelSetValue(ch1, -10);
  CU_ASSERT_DOUBLE_EQUAL(channelGetValue(ch1), -10, 0.001);
  channelUpdate(ch1, -45, 1);
  CU_ASSERT_DOUBLE_EQUAL(channelGetValue(ch1), -45, 0.001);
  channelUpdate(ch1, -8, 1);
  CU_ASSERT_DOUBLE_EQUAL(channelGetValue(ch1), -45, 0.001);
  
  
  // test count mode
  channelSetMode(ch1, CHANNEL_MODE_COUNT);
  channelSetValue(ch1, 2);
  channelSetParam(ch1, CH_PARAM1, 3);
  CU_ASSERT_DOUBLE_EQUAL(channelGetValue(ch1), 2, 0.001);
  channelUpdate(ch1, 2.5, 1);
  CU_ASSERT_DOUBLE_EQUAL(channelGetValue(ch1), 2, 0.001);
  channelUpdate(ch1, 3.1, 1);
  CU_ASSERT_DOUBLE_EQUAL(channelGetValue(ch1), 3, 0.001);
  channelUpdate(ch1, 100.14, 1);
  CU_ASSERT_DOUBLE_EQUAL(channelGetValue(ch1), 3, 0.001);
  channelUpdate(ch1, 1.7, 1);
  CU_ASSERT_DOUBLE_EQUAL(channelGetValue(ch1), 3, 0.001);
  channelUpdate(ch1, -43, 1);
  CU_ASSERT_DOUBLE_EQUAL(channelGetValue(ch1), 3, 0.001);
  channelUpdate(ch1, 98, 1);
  CU_ASSERT_DOUBLE_EQUAL(channelGetValue(ch1), 4, 0.001);  
  

  // test limit mode
  channelSetMode(ch1, CHANNEL_MODE_LIMIT);
  channelSetParam(ch1, CH_PARAM1, 3);
  channelSetParam(ch1, CH_PARAM2, -5);
  channelSetValue(ch1, 2);
  CU_ASSERT_DOUBLE_EQUAL(channelGetValue(ch1), 2, 0.001);
  channelUpdate(ch1, 2.5, 1);
  CU_ASSERT_DOUBLE_EQUAL(channelGetValue(ch1), 2.5, 0.001);
  channelUpdate(ch1, 8, 1);
  CU_ASSERT_DOUBLE_EQUAL(channelGetValue(ch1), 3, 0.001);
  channelUpdate(ch1, -4, 1);
  CU_ASSERT_DOUBLE_EQUAL(channelGetValue(ch1), -4, 0.001);
  channelUpdate(ch1, -20, 1);
  CU_ASSERT_DOUBLE_EQUAL(channelGetValue(ch1), -5, 0.001);
}

void channelAdvancedTests2() {
  channelInit(ch1);
  channelInit(ch2);
  // test integrate mode
  channelSetMode(ch1, CHANNEL_MODE_INTEGRATE);
  channelSetValue(ch1, 0);
  CU_ASSERT_DOUBLE_EQUAL(channelGetValue(ch1), 0, 0.001);
  channelUpdate(ch1, 2, 1);
  CU_ASSERT_DOUBLE_EQUAL(channelGetValue(ch1), 2, 0.001);
  channelUpdate(ch1, 3.3, 1);
  CU_ASSERT_DOUBLE_EQUAL(channelGetValue(ch1), 5.3, 0.001);
  channelUpdate(ch1, -6.4, 1);
  CU_ASSERT_DOUBLE_EQUAL(channelGetValue(ch1), -1.1, 0.001);
  channelUpdate(ch1, 15, 5);
  CU_ASSERT_DOUBLE_EQUAL(channelGetValue(ch1),  1.9, 0.001);
  
  
  
  //channelSetMode(ch1, CH_M)
}


int main() {
  CU_pSuite pSuite        = NULL;
  CU_pSuite channelSuite  = NULL;
  CU_pSuite alarmSuite    = NULL;

  /* Initialize the CUnit test registry */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();

  /* Add a suite to the registry */
  channelSuite = CU_add_suite("channeltest", init_channelSuite, clean_channelSuite);
  if (channelSuite == NULL) {
    CU_cleanup_registry();
    return CU_get_error();
  }
  
  /* Add a suite to the registry */
/*
  pSuite = CU_add_suite("newcunittest", init_suite, clean_suite);
  if (NULL == pSuite) {
    CU_cleanup_registry();
    return CU_get_error();
  }
*/

  //
  // Channel test
  //
  if ((NULL == CU_add_test(channelSuite, "channeltest",               channelTest)) ||
      (NULL == CU_add_test(channelSuite, "advanced channel tests",    channelAdvancedTests)) ||
      (NULL == CU_add_test(channelSuite, "advanced channel tests 2",  channelAdvancedTests2))) {
    CU_cleanup_registry();
    return CU_get_error();
  }

  /* Run all tests using the CUnit Basic interface */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  CU_basic_run_tests();
  CU_cleanup_registry();
  return CU_get_error();
}
