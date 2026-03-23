#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
#include "../TP4_TU/TP4_TU.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TP4TUtest
{
	TEST_CLASS(TP4TUtest)
	{
	public:
		
		TEST_METHOD(TestDivisionExact)
		{
			Assert::AreEqual(divisionExacte(10,2), 1);
		}

		TEST_METHOD(TestDivisionExact2)
		{
			Assert::AreEqual(divisionExacte(10, 3), 0);
		}

		TEST_METHOD(TestDivisionExact3)
		{
			Assert::AreEqual(divisionExacte(0, 5), 1);
		}

		TEST_METHOD(TestDivisionExact4)
		{
			Assert::AreEqual(divisionExacte(10, 10), 1);
		}
	};
}
// car la division euclidienne par zero n'est pas possible