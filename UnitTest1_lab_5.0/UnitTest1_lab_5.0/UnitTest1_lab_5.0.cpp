#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5.0/lab_5.0.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1lab50
{
	TEST_CLASS(UnitTest1lab50)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			
				int t = sum(2, 3);
				Assert::AreEqual(t, 5);
			}
		}
	};
}
