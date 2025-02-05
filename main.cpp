#include <iostream>
#include <thread>
#include <chrono>
#include <stdio.h>
#include <string>

int main() {
	// 初期化
	std::string original(100000, 'a');

	// 計測
	auto origin = std::chrono::high_resolution_clock::now();
	std::string copy = original;
	auto Copy = std::chrono::high_resolution_clock::now();

	// 移動操作
	auto  originMove = std::chrono::high_resolution_clock::now();
	std::string moved = std::move(original);
	auto Move = std::chrono::high_resolution_clock::now();

	// 計測結果表示
	auto copyDuration = std::chrono::duration_cast<std::chrono::microseconds>(Copy - origin).count();
	auto moveDuration = std::chrono::duration_cast<std::chrono::microseconds>(Move - originMove).count();

	std::cout << "コピーの時間: " << copyDuration << " microSecond\n";
	std::cout << "移動操作時間: " << moveDuration << " microSecond\n";

	return 0;
}