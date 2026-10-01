#include "test.h"
void test(long long number, bool expected, string test_name) {
	bool actual = check_number(number);
	string msg = test_name + "-->";
	msg += actual == expected ? "Pass" : "Fail";
	cout << msg << endl;
}


void run_all_tests() {
	test(1111, true, "test01");
	test(-1111, true, "test02");
	test(1112, false, "test03");
	test(-1311, false, "test04");
	test(0, false, "test05");
	test(7, false, "test06");
	test(-1, false, "test07");
	test(1222, false, "test08");
	test(2111, false, "test09");
	test(1357, false, "test10");
	test(-1357, false, "test11");
}