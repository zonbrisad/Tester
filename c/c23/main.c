/**
 *---------------------------------------------------------------------------
 * @brief    Test of c23 features
 *
 * @file     main.c
 * @author   Peter Malmberg <peter.malmberg@gmail.com>
 * @version  0.01
 * @date     2023-11-12
 * @license  MIT
 *
 *---------------------------------------------------------------------------
 *
 *
 */

// Include ------------------------------------------------------------------

#if __has_include (<stdio.h>)
#include <stdio.h>
#endif

#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include "main.h"

// Macros -------------------------------------------------------------------

//constexpr char* ces = "Kalle";


// Prototypes ---------------------------------------------------------------

// Datatypes ----------------------------------------------------------------

// Variables ----------------------------------------------------------------

// Code ---------------------------------------------------------------------

typedef struct
{
	long int ma;
	long int mb;
} test_s;

test_s a = {.ma = 1, .mb = 2};
test_s b = {3, 4};

//char x[32] = { #embed <hello.txt> };

void print_s(test_s *x);
void print_s(test_s *x)
{
	printf("test_s a=%032b  %06ld, b=%032b %p\n", x->ma, x->ma, x->mb, x);
}

[[deprecated]]
void depr() {
}


// void print_size(test_s x[])
// {
// 	printf("Size: %lu\n", sizeof(x));
// }

test_s slist[] = {
		{.ma = 1, .mb = 2},
		{.ma = 3, .mb = 4},
		{.ma = 5, .mb = 6},
		{.ma = 7, .mb = 8},
		{0},
		[10] =
				{.ma = 7, .mb = 8},

};

int func(int l[static 2])
{
	return l[0];
}

int main(void)
{
	int x1[] = {1};
	int x2[] = {2, 3};
	int x3[] = {3, 4, 5};
	bool bl = false;
	int x = 0b10101;
	char str[] = "Hello";
	char str2[12];
	auto a = "123";
//	int y = 1'000'000;
//	constexpr int xx = 123;
	depr();  // compile time warning
//	str2 = strdup(str);
  	
	for (size_t i = 0; i < 10; i++)
	{
		printf("Row %ld\n", i);
	}

	func(x1);
	func(x2);
	func(x3);
	func(NULL);

	print_s(&slist[0]);
	print_s(&slist[3]);
	print_s(&slist[4]);
	print_s(&slist[5]);
	print_s(&slist[10]);
	print_s(&slist[100]);

	printf("Size: %ld\n", sizeof(slist));
	printf("Size: %ld\n", sizeof(size_t));
	// printf("C standard " __STDC__ "\n");
	printf("C standard: %d\n", __STDC_VERSION__);

	return 0;
}
