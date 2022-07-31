#include "pch.h"
#include "CppUnitTest.h"
#include "../SquareRoot/SquareRoot.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace SquareRootTest
{
	TEST_CLASS(SquareRootTest)
	{
	public:
		
		TEST_METHOD(GenericTestCases)
		{
			Assert::AreEqual(6.0, square_root(36.0));
			Assert::AreEqual(2.0, square_root(4.0));
		}
	};
}
