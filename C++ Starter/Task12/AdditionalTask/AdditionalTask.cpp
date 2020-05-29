
#include <iostream>
namespace NamespaceMul {
	void Mul(int a, int b) {
		std::cout << "(a * b) = " << (a * b) << std::endl;
	};
}
namespace NamespaceAdd {
	void Add(int a, int b) {
		std::cout << "(a + b) = " << (a + b) << std::endl;
	};
}
namespace NamespaceMinus {
	void Minus(int a, int b) {
		std::cout << "(a - b) = " << (a - b) << std::endl;
	};
}
namespace NamespacDiv {
	void Div(int a, int b) {
		std::cout << "(a / b) = " << (a / b) << std::endl;
	};
}


int main()
{
	int a = 2, b = 2;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	NamespaceAdd::Add(a, b);
	NamespaceMinus::Minus(a, b);
	NamespaceMul::Mul(a, b);
	NamespacDiv::Div(a, b);
}
