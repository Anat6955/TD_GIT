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
		
		TEST_METHOD(TestContientMajuscule)
		{
			Assert::AreEqual(contientMajuscule("bonjour"), 0);
		}

		TEST_METHOD(TestContientMajuscule2)
		{
			Assert::AreEqual(contientMajuscule("Bonjour"), 1);
		}

		TEST_METHOD(TestContientMajuscule3)
		{
			Assert::AreEqual(contientMajuscule("ABC"), 1);
		}

		TEST_METHOD(TestContientMajuscule4)
		{
			Assert::AreEqual(contientMajuscule(NULL), 0);
		}
	};
}