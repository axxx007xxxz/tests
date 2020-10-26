#include <iostream>



int main() {
	class test {
		public:
			int a;
			int b;
		
		test() {
			this->a = 0;
			this->b = 0;
		}

		test(int a, int b) {
			this->a = a;
			this->b = b;
		}

		int sum() {
			return this->a + this->b;
		}

		int substract() {
			return this->a - this->b;
		}

		void display(int value) {
			std::cout << "Result: " << value << std::endl;
		}
	};


	int a, b;
	a = 73;
	b = 8;

	test t1 = test();
	std::cout << "Values of \"t1\":" << std::endl;
	std::cout << "\tA: " << t1.a << std::endl;
	std::cout << "\tB: " << t1.b << std::endl;

	std::cout << std::endl;

	test t2 = test(a, b);
	std::cout << "Values of \"t2\":" << std::endl;
	std::cout << "\tA: " << t2.a << std::endl;
	std::cout << "\tB: " << t2.b << std::endl;
	std::cout << "\tSUM: " << t2.sum() << std::endl;
	std::cout << "\tSUBSTRACT: " << t2.substract() << std::endl;
}