#include <iostream>

int main() {

for (int i = 1; i <= 30; i++) {

int fizz = i % 3;
int buzz = i % 5;
int test1 = 0;
int test2 = 0;

if (fizz == 0) {
test1 += 1;
}
if (buzz == 0) {
test2 += 1;
}
int test3 = test1 + test2;

if (test3 == 2) {
std::cout << "fizzbuzz\n";
}
else if (test1 == 1) {
std::cout << "fizz\n";
}
else if (test2 == 1) {
std::cout << "buzz\n";
}
else {
std::cout << i << "\n";
}
}}
