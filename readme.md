# Base C++ Project
This workspace serves as a base for all my C++ projects development on VSCode. It provides a starting point with common installations and settings.

## Installation

To use this base C++ project, follow these steps:

1. Clone the repository to your local machine.
2. Run the `setup_environment.sh` script to set up the C++ environment. Make sure you have the necessary permissions to execute the script. You can give the necessary permissions by running `chmod +x setup_environment.sh`.
3. Open the project in your favorite C++ IDE or text editor.

## Project Structure

The project structure is organized as follows:

```
.
├── src
│   └── main.cpp
├── include
│   └── mylibrary.h
├── README.md
└── .gitignore
```

- `src`: Contains the source code files.
- `include`: Contains header files.
- `README.md`: This file, providing an overview of the project.
- `.gitignore`: Specifies files and directories to be ignored by version control.

## Usage

To start a new C++ project based on this workspace, follow these steps:

1. Create a new directory for your project.
2. Copy the contents of this base C++ project into your new project directory.
3. Modify the source code and header files according to your project requirements.
4. Build and run your project using your preferred C++ compiler.

## CMake Integration

Every project in this workspace uses CMake for building and linking libraries. Make sure to configure your CMakeLists.txt file accordingly.

To use CMake presets for selecting build configurations, such as release or debug, follow these steps:

1. Open the project in Visual Studio Code.
2. Press `Ctrl+Shift+P` (or `Cmd+Shift+P` on macOS) to open the command panel.
3. Type "CMake: Select a Kit" and press Enter.
4. Choose the desired preset, such as "Release" or "Debug".
5. Build and run your project using the selected preset.

Please note that hitting the "Start" button in Visual Studio Code will always launch the project in debug mode.

## Recommended Extensions

For full integration and enhanced development experience, it is recommended to install the following extensions:

- C/C++: Provides IntelliSense, debugging, and code navigation capabilities for C and C++ development.
- CMake: Adds support for CMake syntax highlighting, IntelliSense, and build tasks.
- GitLens: Enhances Git integration by displaying Git blame annotations and other useful information inline with your code.
- Clang-Format: Automatically formats your C++ code according to predefined style rules.

## Contributing

If you would like to contribute to this base C++ project, feel free to submit a pull request. Please ensure that your changes align with the project's goals and guidelines.

## License

This project is licensed under the [MIT License](https://opensource.org/licenses/MIT). Feel free to use it as a starting point for your own C++ projects.


