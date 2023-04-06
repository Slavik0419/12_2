#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_12_2_it/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int s = main();
			Assert::AreEqual(s, 0);


		}
	};
}
