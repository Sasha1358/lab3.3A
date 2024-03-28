#include "pch.h"
#include "CppUnitTest.h"
#include "../lab3.3A/PublicDerived.h"
#include "../lab3.3A/PublicDerived.cpp"
#include "../lab3.3A/PrivateDerived.h"
#include "../lab3.3A/PrivateDerived.cpp"
#include "../lab3.3A/Rational.cpp"
#include "../lab3.3A/Rational.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33A
{
	TEST_CLASS(UnitTest33A)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			PublicDerived z1(1, 2);
			PublicDerived z2(1, 3);
			PublicDerived z3 = z1 + z2;
			Assert::AreEqual(z3.getNumerator(), 5); 
			Assert::AreEqual(z3.getDenominator(), 6);
		}
	};
}
