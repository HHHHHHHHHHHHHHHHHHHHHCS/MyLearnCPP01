#include "_14_07_CircularDependencyStdSharedPtrAndStdWeakPtr.h"

void _14_07_CircularDependencyStdSharedPtrAndStdWeakPtr::Test()
{
	//Test01();
	//Test02();
	Test03();
	Test04();
}

void _14_07_CircularDependencyStdSharedPtrAndStdWeakPtr::Test01()
{
	//这里没有被释放 是因为两个指针相互引用
	//结束的时候A释放时候发现B还在引用   B释放发现A还在引用  所以双方都没有释放

	auto lucy = std::make_shared<Person>("Lucy"); // create a Person named "Lucy"
	auto ricky = std::make_shared<Person>("Ricky"); // create a Person named "Ricky"

	MakePartner(lucy, ricky); // Make "Lucy" point to "Ricky" and vice-versa
}

void _14_07_CircularDependencyStdSharedPtrAndStdWeakPtr::Test02()
{
	//A释放的时候 发现自己还在  所以就释放不掉了
	auto lucy = std::make_shared<Person>("Lucy"); // create a Person named "Lucy"
	lucy->partner = lucy;
}

void _14_07_CircularDependencyStdSharedPtrAndStdWeakPtr::Test03()
{
	//std::weak_ptr 是观察者  没有对象
	//只有等到调用lock()函数时才会有可能拥有对象，std::weak_ptr有以下特性：
	//	只是拥有一个没有拥有的被std::shared_ptr托管的对象；
	//	只有调用lock()创建std::shared_ptr时才会引用对象；
	//	在lock()时会递增一个引用计算；
	//	在std::shared_ptr主指针结束后，如果std::weak_ptr的lock成功对象还存在，那么此时还有代码调用lock的话，也会引起引用计算加1。

	auto lucy = std::make_shared<WeakPerson>("Lucy");
	auto ricky = std::make_shared<WeakPerson>("Ricky");

	PartnerUp(lucy, ricky);
}

void _14_07_CircularDependencyStdSharedPtrAndStdWeakPtr::Test04()
{
	//	只有调用lock()创建std::shared_ptr时才会引用对象；
	//	在lock()时会递增一个引用计算；
	auto lucy = std::make_shared<WeakPerson>("Lucy");
	auto ricky = std::make_shared<WeakPerson>("Ricky");

	PartnerUp(lucy, ricky);

	auto partner = ricky->GetPartner(); // get shared_ptr to Ricky's partner
	std::cout << ricky->GetName() << "'s partner is: " << partner->GetName() << '\n';
}
