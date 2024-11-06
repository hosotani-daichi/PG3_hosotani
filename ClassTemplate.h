#pragma once
#include <stdio.h>
#include <iostream>

/*クラス名「TemplateClass」で複数クラステンプレートを定義*/
template<typename Type1, typename Type2>

class TemplateClass {

public:

	//コンストラクタ（メンバ変数Number1,Number2を引数number1,number2で初期化）
	TemplateClass(Type1 number1, Type2 number2) :
		Number1(number1), Number2(number2) {}

	Type1 Min() {
		if (Number1 > Number2) {
			return static_cast<Type1>(Number2);
		}
		else {
			return static_cast<Type2>(Number1);
		}
	};

private:

	/*Type,Type2を使ってNumber1と2を定義*/
	Type1 Number1;
	Type2 Number2;
};