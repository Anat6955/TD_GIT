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
		
		TEST_METHOD(TestFactorielle)
		{
			Assert::AreEqual(factorielle(0), 1);
		}

		TEST_METHOD(TestFactorielle2)
		{
			Assert::AreEqual(factorielle(1), 1);
		}

		TEST_METHOD(TestFactorielle3)
		{
			Assert::AreEqual(factorielle(4), 24);
		}

		TEST_METHOD(TestFactorielle4)
		{
			Assert::AreEqual(factorielle(-5), 120);
		}
	};
}

// Non car sa ferait une bloucle infini
// il sufit de faire une vérification au début de la fonction