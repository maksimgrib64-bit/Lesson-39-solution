#include "test.h"
void test(long long number, int expected, string test_name) {
	bool actual = reverse(number);
	string msg = test_name + "-->";
	msg += actual == expected ? "Pass" : "Fail";
	cout << msg << endl;
}




void run_all_tests() {
	test(12345, 54321, "test01");
	test(-12345, -54321, "test02");
	test(12300, 32100, "test03");
	test(10000, 10000, "test04");
	test(0, 0, "test05");
	test(7, 7, "test06");
	test(-10000, -10000, "test07");
	test(-7, -7, "test08");
}
