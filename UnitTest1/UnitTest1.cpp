#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_7.1rec/Lab_7.1rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			const int rowCount = 2;
			const int colCount = 2;

			int** a = new int* [rowCount];
			for (int i = 0; i < rowCount; i++)
				a[i] = new int[colCount];

			a[0][0] = 10;
			a[0][1] = 7;
			a[1][0] = 12;
			a[1][1] = 5;

			int S = 0;
			int k = 0;

			Calc(a, rowCount, colCount, 0, 0, S, k);

			Assert::AreEqual(12, S);
			Assert::AreEqual(1, k);

			for (int i = 0; i < rowCount; i++)
				delete[] a[i];
			delete[] a;
		}
	};
}
