#include <iostream>
#include <string>
using namespace std;

#include "Tester_IfStatements.hpp"
#include "Tester_ForLoops.hpp"
#include "Tester_Struct.hpp"
#include "Tester_Class.hpp"
#include "Tester_Inheritance.hpp"
#include "Tester_Pointers.hpp"

int main()
{
	IfStatementTester::Start();

	ForLoopTester::Start();

	StructTester::Start();

	ClassTester::Start();

	InheritanceTester::Start();

	PointerTester::Start();

	cout << "End of program" << endl;
	while (true) {}

	return 0;
}