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
			int tab[] = {1, 2, 3};
			Assert::AreEqual(sommeTableau(tab, 3), 6);
		}

		TEST_METHOD(TestDivisionExact2)
		{
			int tab2[] = { 5 };
			Assert::AreEqual(sommeTableau(tab2, 1), 5);
		}

		TEST_METHOD(TestDivisionExact3)
		{
			int tab3[] = { -1, 4 ,-3 };
			Assert::AreEqual(sommeTableau(tab3, 3), 0);
		}


	};
}
