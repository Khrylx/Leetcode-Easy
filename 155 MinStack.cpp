#include <vector>
#include <iostream>
#include <string>
#include <stack>
#include <unordered_map>
#include <unordered_set>

using namespace std;

class MinStack {
private:
	vector<int> elements;
	vector<int> minElements;
public:

	void push(int x) {
		if (minElements.empty() || minElements.back() >= x)
		{
			minElements.push_back(x);
		}
		elements.push_back(x);
	}

	void pop() {
		int val = elements.back();
		elements.pop_back();
		if (val == minElements.back())
			minElements.pop_back();
	}

	int top() {
		return elements.back();
	}

	int getMin() {
		return minElements.back();
	}
};

int main()
{
	MinStack S;
	return 1;
}