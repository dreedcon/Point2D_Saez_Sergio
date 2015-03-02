#include "stdafx.h"
#include "CppUnitTest.h"
#include "../../Project4/Project4/ClassPoint2D.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(MethodSum)
		{
			Point2D a(3,2);
			Point2D b(4,2);
			Point2D c;
			c = a + b;
			Assert::IsTrue((c.x == a.x + b.x) && (c.y == a.y + b.y));
		}

		TEST_METHOD(MethodSub)
		{
			Point2D a(6,3);
			Point2D b(5,8);
			Point2D c;
			c = a - b;
			Assert::IsTrue((c.x == a.x - b.x) && (c.y == a.y - b.y));
		}

		TEST_METHOD(MethodIn)
		{
			Point2D a(1,3);
            Point2D b(5,3);
			Point2D c(1,3);
            a += b;
			Assert::IsTrue((a.x == c.x + b.x) && (a.y == c.y + b.y));
		}
		
		TEST_METHOD(MethodDe)
		{
			Point2D a(2,5);
			Point2D b(4,8);
			Point2D c(2,5);
			a -= b;
			Assert::IsTrue((a.x == c.x - b.x) && (a.y == c.y - b.y));
		}

		TEST_METHOD(MethodEq)
		{
			Point2D a(2,5);
			Point2D b(3,2);
			a = b;
		    Assert::IsTrue((a.x == b.x) && (a.y == b.y));
		}
		
		TEST_METHOD(MethodCo)
		{
			Point2D a(4,6);
			Point2D b(2,3);
			Assert::IsFalse((a.x == b.x) && (a.y == b.y));
		}
	    
		TEST_METHOD(MethodDi)
		{
			Point2D a(9,7);
			Point2D b(9,2);
			Assert::IsTrue((a.x != b.x) || (a.y != b.y));
		}
	
		
		TEST_METHOD(Method0)
		{
			Point2D a(3,0);
			Point2D b(0,2);
			Assert::IsFalse(((a.x == 0) && (b.x == 0)) && ((a.y == 0) && (b.y == 0)));
		}
	
		TEST_METHOD(Method00)
		{
			Point2D a(0, 0);
			Point2D b(0, 0);
			Assert::IsTrue(((a.x == 0) && (b.x == 0)) && ((a.y == 0) && (b.y == 0)));
		}
	
	};
}