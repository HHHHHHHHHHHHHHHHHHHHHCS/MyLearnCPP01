#include "_07_06_InheritanceAndAccessSpecifiers.h"

void _07_06_InheritanceAndAccessSpecifiers::Test()
{
	Test01();
	Test02();
	Test03();
	Test04();
	Test05();

}


void _07_06_InheritanceAndAccessSpecifiers::Test01()
{
	_07_06_InheritanceAndAccessSpecifiers_Cls::Base base;
	base.m_public = 1;
	//base.m_private = 2;
	//base.m_protected = 3;

	_07_06_InheritanceAndAccessSpecifiers_Cls::Derived derived;
	derived.m_public = 1;
	//derived.m_private = 2;
	//derived.m_protected = 3;
}

void _07_06_InheritanceAndAccessSpecifiers::Test02()
{
	_07_06_InheritanceAndAccessSpecifiers_Cls::Pub pub;
	pub.m_public = 1; // 
	//pub.m_private = 2; // error
	//pub.m_protected = 3; // error
}

void _07_06_InheritanceAndAccessSpecifiers::Test03()
{
	_07_06_InheritanceAndAccessSpecifiers_Cls::Pri pri;
	//pri.m_public = 1; // 
	//pri.m_private = 2; // error
	//pri.m_protected = 3; // error
}

void _07_06_InheritanceAndAccessSpecifiers::Test04()
{
	_07_06_InheritanceAndAccessSpecifiers_Cls::Pro pro;
	//pro.m_public = 1; // error
	//pro.m_private = 2; // error
	//pro.m_protected = 3; // error
}

void _07_06_InheritanceAndAccessSpecifiers::Test05()
{
	_07_06_InheritanceAndAccessSpecifiers_Cls::Def def;
	//def.m_public = 1; 
	//def.m_private = 2; 
	//def.m_protected = 3; 
}

