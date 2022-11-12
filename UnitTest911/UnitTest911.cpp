#include "pch.h"
#include "CppUnitTest.h"
#include "../TestLab9.1.1/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest911
{
	TEST_CLASS(UnitTest911)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = main();
			Assert::AreEqual(t, 0);
		}
	};
}
