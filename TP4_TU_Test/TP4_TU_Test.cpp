#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
#include "../TP4_TU/TP4_TU.h"
}
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TP4TUTest
{
	TEST_CLASS(TP4TUTest)
	{
	public:
		
		TEST_METHOD(TestEstPair)
		{
			Assert::AreEqual(estPair(4), 1);

			
		}
		TEST_METHOD(TestEstPair1)
		{
			Assert::AreEqual(estPair(7), 0);


		}
		TEST_METHOD(TestEstPair2)
		{
			Assert::AreEqual(estPair(0), 1);


		}
		TEST_METHOD(TestEstPair3)
		{
			Assert::AreEqual(estPair(-2), 1);


		}
		TEST_METHOD(TestEstPair4)
		{
			Assert::AreEqual(estPair(-3), 0);


		}

		TEST_METHOD(TestMax)
		{
			Assert::AreEqual(max2(5,3), 5);
		}
		TEST_METHOD(TestMax1)
		{
			Assert::AreEqual(max2(3, 5), 5);
		}
		TEST_METHOD(TestMa3)
		{
			Assert::AreEqual(max2(-1, -8), -1);
		}
		TEST_METHOD(TestMax4)
		{
			Assert::AreEqual(max2(4, 4), 4);
		}


		TEST_METHOD(Fact1)
		{
			Assert::AreEqual(factorielle(0), 1);
		}

		TEST_METHOD(Fact2)
		{
			Assert::AreEqual(factorielle(1), 1);
		}

		TEST_METHOD(Fact3)
		{
			Assert::AreEqual(factorielle(4), 24);
		}

		TEST_METHOD(Fact5)
		{
			Assert::AreEqual(factorielle(5), 120);
		}

		TEST_METHOD(Fact6)
		{
			Assert::AreEqual(factorielle(-3), 0);
		}


		TEST_METHOD(contientMajuscule1)
		{
			Assert::AreEqual(contientMajuscule("bonjour"), 0);
		}

		TEST_METHOD(contientMajuscule2)
		{
			Assert::AreEqual(contientMajuscule("bonJour"), 1);
		}

		TEST_METHOD(contientMajuscule3)
		{
			Assert::AreEqual(contientMajuscule("ABC"), 1);
		}

		TEST_METHOD(contientMajuscule4)
		{
			Assert::AreEqual(contientMajuscule(""), 0);
		}

		TEST_METHOD(contientMajuscule1)
		{
			Assert::AreEqual(contientMajuscule(NULL), 0);
		}
	};
}
