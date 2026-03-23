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
		
		TEST_METHOD(TestMax)
		{
			Assert::AreEqual(max2(5,3), 5);
		}

		TEST_METHOD(TestMax2)
		{
			Assert::AreEqual(max2(3, 5), 5);
		}

		TEST_METHOD(TestMax3)
		{
			Assert::AreEqual(max2(-1, -8), -1);
		}

		TEST_METHOD(TestMax4)
		{
			Assert::AreEqual(max2(4, 4), 4);
		}
	};
}
