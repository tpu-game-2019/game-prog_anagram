#include "stdafx.h"
#include "CppUnitTest.h"
#include "anagram.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest3)
	{
	public:

		TEST_METHOD(TestMethod3)
		{
			Assert::AreEqual(Anagram::is_anagram("asdfghjkl", "hfdsgjkla"), true);
		}

	};
}