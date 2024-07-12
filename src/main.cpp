#include <iostream>
#include <vector>

// Define a class with proper naming conventions
class MyClass {
   public:
    // Constructor with member initialization list
    MyClass(int value) : value_(value) {}

    // Public member function
    void setValue(int newValue) {
        // Simulate longer function with multiple statements
        if (newValue > value_) {
            std::cout << "Increasing value from " << value_ << " to " << newValue << std::endl;
        } else if (newValue < value_) {
            std::cout << "Decreasing value from " << value_ << " to " << newValue << std::endl;

        } else {
            std::cout << "Value remains unchanged at " << value_ << std::endl;
        }
        value_ = newValue;
    }

    int getValue() const {
        // Simulate longer function with multiple return statements
        if (value_ > 50) {
            return value_ * 2;
        } else {
            return value_ + 10;
        }
    }

   private:
    int value_;  // Private member variable
};

int main() {
    // Use meaningful variable names and initialize variables
    int num = 10;
    std::vector<int> numbers{1, 2, 3, 4, 5};

    // Loop over the vector using range-based for loop
    for (const auto &n : numbers) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    // Create an instance of MyClass and demonstrate its usage
    MyClass obj(42);
    std::cout << "Initial value: " << obj.getValue() << std::endl;
    obj.setValue(100);
    std::cout << "Modified value: " << obj.getValue() << std::endl;

    return 0;
}
