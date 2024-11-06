#include<stdio.h>
#include"ClassTemplate.h"

int main() {
	/*クラス名から型を考えて<>の中を定義*/
	TemplateClass<int, float> intFloatTemplate(10, 50.0f);
	TemplateClass<int, double> intDoubleTemplate(80, 13.0);
	TemplateClass<float, int> floatIntTemplate(2.0f, 9);
	TemplateClass<float, double> floatDoubleTemplate(11.0f, 3.5);
	TemplateClass<double, int> doubleIntTemplate(666.0, 333);
	TemplateClass<double, float> doubleFloatTemplate(435.8, 563.5f);

	std::cout << "int(10)と float(50.0f) を比べた時に小さい数を出す：" << intFloatTemplate.Min() << std::endl;
	std::cout << "int(80)と double(13.0) を比べた時に小さい数を出す：" << intDoubleTemplate.Min() << std::endl;
	std::cout << "float(2.0f)と int(9) を比べた時に小さい数を出す：" << floatIntTemplate.Min() << std::endl;
	std::cout << "float(11.0f)と double(3.5) を比べた時に小さい数を出す：" << floatDoubleTemplate.Min() << std::endl;
	std::cout << "double(666.0)と int(333) を比べた時に小さい数を出す：" << doubleIntTemplate.Min() << std::endl;
	std::cout << "double(435.8)と float(563.5) を比べた時に小さい数を出す：" << doubleFloatTemplate.Min() << std::endl;
	return 0;
}