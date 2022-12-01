#include "pch.h"
#include "CppUnitTest.h"
#include "../laba7.1/laba7.1.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(testLab)
		{

			// int rowCount = 8;
			 // int colCount = 5;
			const int n = 10;
			int *a[n];
			int S = 0;
			int k = 0;
			 res = Calc(a, 8, 5,S,k);
			Assert::AreEqual(res, 5);

		}
	};
}
