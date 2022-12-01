#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_7.3.it/lab_7.3.it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest73it
{
	TEST_CLASS(UnitTest73it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            int result;
            int a[3][3] = {
              {1, 5, 8},
              {2, 15, 7},
              {3, -7, 9},
            };
            int* pa[3] = { a[0], a[1], a[2] };
            result = Sum(pa, 3, 3); ;
            Assert::AreEqual(result, 38);

		}
	};
}
